/*
** EPITECH PROJECT, 2018
** mysh
** File description:
** functions that put the first args and next options into a 2D array
*/

#include <stdlib.h>
#include <stdbool.h>
#include "../../include/my.h"

/*pas au point si on réutilise remettre à la norme correctement*/
static bool browse_till_spaces_or_back_slash_0(char *array, int *u,
	int *q, int *r)
{
	char **buffer;

	while (array[*u] != ' ') {
		if (array[*u] == '\0')
			return (1);
		buffer[*q][*r] = array[*u];
		*r = *r + 1;
		*u = *u + 1;
	}
	*q = *q + 1;
	return (0);
}

static bool check_if_spaces(char *array, int *u,
	int *q, int *r)
{
	char **buffer;

	if (array[*u] != ' ') {
		*r = 0;
		buffer[*q] =
		malloc(sizeof(char) * (my_strlen("test") + 1));
		if (browse_till_spaces_or_back_slash_0
		(array, u, q, r) == 1)
			return (1);
	}
	return (0);
}

void combine_arg_1_and_opts(char *first_arg, char *array,
	char **buffer, char **envp)
{
	int q = 1;
	int r = 0;

	buffer[0] = first_arg;
	for (int u = 0; array[u] != '\0'; u++) {
		if (check_if_spaces(array, &u, &q, &r) == 1)
			break;
	}
}
