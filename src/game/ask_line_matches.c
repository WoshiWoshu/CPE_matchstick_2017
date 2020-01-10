/*
** EPITECH PROJECT, 2018
** minishell
** File description:
** functions that ask line and matches to player
*/

#include <stddef.h>
#include <stdbool.h>
#include "../../include/my.h"
#include "../matchstick.h"
#include "../../include/get_next_line.h"

extern bool ask_line(mstick_t *mstick)
{
	display_ask_line();
	mstick->game.line = get_next_line(0);
	if (mstick->game.line == NULL)
		return (ERROR);
	mstick->game.nb_line = my_getnbr(mstick->game.line);
	return (SUCCESS);
}

extern bool ask_matches(mstick_t *mstick)
{
	display_ask_matches();
	mstick->game.matches = get_next_line(0);
	if (mstick->game.matches == NULL)
		return (ERROR);
	mstick->game.nb_matches = my_getnbr(mstick->game.matches);
	return (SUCCESS);
}
