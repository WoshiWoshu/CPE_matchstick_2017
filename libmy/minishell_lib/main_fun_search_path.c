/*
** EPITECH PROJECT, 2018
** mysh
** File description:
** function call other functions to search the call system function into path
*/

#include <stdlib.h>
#include "../../include/my.h"
#include "../../include/my_printf.h"
#include "../../include/my_minishell.h"
#include "../../include/cl_db_llist.h"

void call_system_path(char **envp, circular_list_t *get_cmd_data)
{
	char *array_opt = malloc(sizeof(char) * 264);
	char **buffer = malloc(sizeof(char *) * 500);

	combine_arg_1_and_opts(get_cmd_data->cm_data,
	get_cmd_data->opt_data,
	buffer, envp);
	if (browse_cmd_into_path(envp, array_opt,
	buffer, get_cmd_data->cm_data) == 1) {
		my_printf("%s", get_cmd_data->cm_data);
		my_putstr(": Command not found.\n");
		exit(0);
	}
}
