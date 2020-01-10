/*
** EPITECH PROJECT, 2018
** mysh
** File description:
** function that get the next path in the variable path into envp
*/

#include <stdlib.h>
#include "../../include/my.h"

static void to_path_sub_part_1(char *array,
	char **envp, char **test, char *buff)
{
	int r = 0;

	for (int i = 0; envp[i] != NULL; i++) {
		if (envp[i][0] == 'P' &&
		envp[i][1] == 'A' && envp[i][2] == 'T')
			test[0] = envp[i];
	}
	r = 0;
	for (int g = 0; test[0][g] != '\0'; g++) {
		array[g] = test[0][g];
		r++;
	}
	array[r] = '\0';
}

static int to_path_sub_sub_part_2(char *array, char *array_opt, int *f, int *r)
{
	if (array[*f] < 'A' && array[*f] != '='
	|| array[*f] > 'Z' && array[*f] != '=') {
		if (array[*f] == ':')
			return (1);
		if (array[*f + 1] == '\0') {
			array_opt[*r] = array[*f];
			*r = *r + 1;
			*f = 0;
			return (1);
		}
		array_opt[*r] = array[*f];
		*r = *r + 1;
	}
	*f = *f + 1;
	return (0);
}

static int to_path_sub_part_2(char *array, char *array_opt, int f)
{
	int r = 0;

	while (array[f] != '\0') {
		if (to_path_sub_sub_part_2(array, array_opt, &f, &r) == 1)
			break;
	}
	array_opt[r] = '\0';
	return (f);
}

static void to_path_sub_part_3(char *buff, char *line)
{
	int g = 0;
	int u = 0;

	buff[0] = '/';
	g = 0;
	u = 1;
	while (line[g] != '\0') {
		buff[u] = line[g];
		u++;
		g++;
	}
	buff[u] = '\0';
}

char *to_path(char **envp, char *array_opt, char *line)
{
	char *array = malloc(sizeof(char) * 100);
	char *buff = malloc(sizeof(char) * 100);
	char **test = malloc(sizeof(char) * 100);
	int f = 0;
	static int count = 0;

	to_path_sub_part_1(array, envp, test, buff);
	if (count == 0) {
		f = 0;
		count++;
	} else if (count != 0) {
		f++;
		count++;
	}
	f = to_path_sub_part_2(array, array_opt, f);
	to_path_sub_part_3(buff, line);
	my_strcat(array_opt, buff);
	free(test);
	free(buff);
	free(array);
	return (array_opt);
}
