/*
** EPITECH PROJECT, 2018
** mysh
** File description:
** function that get next two arguments and last options
*/

#include "../../include/my_minishell.h"
#include <stdbool.h>

static bool bypass_first_arg(char *array,
	parsing_m1_variables_t *parsing_m1_variables, int *i)
{
	for (*i; array[*i] == ' '; *i += 1);
	for (*i; array[*i] != ' '; *i += 1)
		if (array[*i] == '\0')
			return (1);
	for (*i; array[*i] == ' '; *i += 1);
	return (0);
}

static void get_last_arg_opts(char *array,
	parsing_m1_variables_t *parsing_m1_variables,
	int *i, int *k)
{
	for (*i, *k = 0; array[*i] != '\0'; *i += 1, *k += 1) {
		parsing_m1_variables->get_last_opts[*k] = array[*i];
	}
	parsing_m1_variables->get_last_opts[*k] = '\0';
}

void get_next_two_arg(char *array,
	parsing_m1_variables_t *parsing_m1_variables)
{
	int i = 0;
	int k = 0;

	bypass_first_arg(array, parsing_m1_variables, &i);
	for (i, k = 0; array[i] != ' '; ++i, k++) {
		parsing_m1_variables->get_option_1[k] = array[i];
		if (array[i] == '\0')
			break;
	}
	parsing_m1_variables->get_option_1[k] = '\0';
	for (i; array[i] == ' '; ++i);
	for (i, k = 0; array[i] != ' '; ++i, k++) {
		parsing_m1_variables->get_option_2[k] = array[i];
		if (array[i] == '\0')
			break;
	}
	parsing_m1_variables->get_option_2[k] = '\0';
	get_last_arg_opts(array, parsing_m1_variables, &i, &k);
}
