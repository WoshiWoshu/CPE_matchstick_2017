/*
** EPITECH PROJECT, 2018
** mysh
** File description:
** minishell 1 parsing functions
*/

#include <stdlib.h>
#include "../../include/my.h"
#include "../../include/my_minishell.h"

char *back_slash_n_back_slash_0(char *array)
{
	int i = 0;

	while (array[i] != '\n') {
		i++;
	}
	array[i] = '\0';
	return (array);
}

char *to_parse_options_and_delet_spaces(char *array,
	char *new_array)
{
	int i = 0;
	int j = 0;

	new_array = malloc(sizeof(char) * my_strlen(array));
	for (i = i; array[i] != '\0'; i++) {
		if (array[i] != ' ' && array[i + 1] == ' ')
			break;
	}
	i++;
	for (i = i, j = j; array[i] != '\0'; i++) {
		if (array[i] != ' ') {
			new_array[j] = array[i];
			j++;
		}
	}
	new_array[j] = '\0';
	return (new_array);
}

char *delet_spaces(char *array, char *new_array)
{
	int i = 0;
	int j = 0;

	new_array = malloc(sizeof(char) * my_strlen(array));
	for (i = i; array[i] == ' '; i++);
	for (i = i; array[i] != ' '; i++, j++) {
		new_array[j] = array[i];
		if (array[i] == '\0') {
			new_array[j] = '\0';
			return (new_array);
		}
	}
	return (new_array);
}

char *delet_spaces_with_one_parameter(char *array, char *new_array_one_param,
	parsing_m1_variables_t *parsing_m1_variables)
{
	return (0);
}
