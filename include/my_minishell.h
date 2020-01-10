/*
** EPITECH PROJECT, 2018
** mysh
** File description:
** minishell 1 headers
*/

#ifndef _MY_MINISHELL1_H_
#define _MY_MINISHELL1_H_

#include <stdbool.h>

typedef struct parsing_m1_variables_t parsing_m1_variables_t;
struct parsing_m1_variables_t {
	char *new_array_one_param_cpy;
	char *get_option_1;
	char *get_option_2;
	char *get_last_opts;
};

char *back_slash_n_back_slash_0(char *array);
char *delet_spaces(char *array, char *new_array);
char *delet_spaces_with_one_parameter(char *array, char *new_array_one_param,
	parsing_m1_variables_t *parsing_m1_variables);
char *to_parse_options_and_delet_spaces(char *array,
	char *new_array);
bool check_eof_to_back_slash_n(char *array);
char *tabulations_to_spaces(char *array);
int back_slash_n_spaces_check(char *array);
void get_next_two_arg(char *array,
	parsing_m1_variables_t *parsing_m1_variables);
void combine_arg_1_and_opts(char *first_arg, char *array,
	char **buffer, char **envp);
char *to_path(char **envp, char *array_opt, char *line);
int browse_cmd_into_path(char **envp, char *array_opt,
	char **tabu_2, char *tab);

#endif /* _MY_MINISHELL1_H_ */
