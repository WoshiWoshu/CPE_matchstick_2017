/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** functions that check the error when player enter the line
*/

#include <stdbool.h>
#include <unistd.h>
#include "../matchstick.h"

extern bool error_line_pos_number(mstick_t *mstick, char **array)
{
	if (mstick->game.line[0] < '0' || mstick->game.line[0] > '9') {
		write(1, "Error: invalid input (positive number expected)", 47);
		if (player_get_line(mstick, array) == ERROR)
			return (ERROR);
	}
	return (SUCCESS);
}

extern bool error_line_out_of_range(mstick_t *mstick, char **array)
{
	if ((mstick->game.nb_line) >= (mstick->game.y - 1)
	|| (mstick->game.nb_line) <= 0) {
		write(1, "Error: this line is out of range", 32);
		if (player_get_line(mstick, array) == ERROR)
			return (ERROR);
	}
	return (SUCCESS);
}
