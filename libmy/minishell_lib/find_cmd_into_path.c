/*
** EPITECH PROJECT, 2018
** mysh
** File description:
** functions that find the desired function by browsing into path
*/

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include "../../include/my.h"
#include "../../include/my_minishell.h"

static bool found_cmd_or_not(int i,
	char *array_opt,
	char **envp, char *tab)
{
	array_opt = to_path(envp, array_opt, tab);
	if (i == 8)
		return (1);
	return (0);
}

int browse_cmd_into_path(char **envp, char *array_opt,
	char **tabu_2, char *tab)
{
	int status = 0;
	pid_t cpid = fork();
	int n = 0;
	int i = 0;

	if (cpid > 0) {
		status = 0;
		waitpid(-1, &status, 0);
	}
	if (cpid == 0) {
		i = 0;
		while (n = execve(array_opt, tabu_2, envp)) {
		}
	}
}
