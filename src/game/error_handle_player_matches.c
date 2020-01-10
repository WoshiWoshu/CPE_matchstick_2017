/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** functions that handle error of matches enter by the player
*/

#include <unistd.h>
#include "../matchstick.h"
#include "../../include/my.h"

extern bool error_matches_inferior_to_zero(mstick_t *mstick, char **array)
{
	if (mstick->game.matches[0] == '0') {
		write(1, "You have to remove at least one match", 37);
		if (player_get_line(mstick, array) == ERROR)
			return (ERROR);
		if (player_get_matches(mstick, array) == ERROR)
			return (ERROR);
	}
	return (SUCCESS);
}

extern bool error_matches_pos_number(mstick_t *mstick, char **array)
{
	if (mstick->game.matches[0] < '0' || mstick->game.matches[0] > '9') {
		write(1,
		"Error: invalid input (positive number expected)", 47);
		if (player_get_line(mstick, array) == ERROR)
			return (ERROR);
		if (player_get_matches(mstick, array) == ERROR)
			return (ERROR);
	}
	return (SUCCESS);
}

extern bool error_matches_too_much(mstick_t *mstick, char **array)
{
	char *argv_2 = mstick->mainv.agv[2];
	long matches_take_off = my_getnbr(argv_2);

	if (mstick->game.nb_matches > matches_take_off) {
		write(1, "Error: you cannot remove more than ", 35);
		my_putstr(argv_2);
		write(1, " matches per turn", 17);
		if (player_get_line(mstick, array) == ERROR)
			return (ERROR);
		if (player_get_matches(mstick, array) == ERROR)
			return (ERROR);
	}
	return (SUCCESS);
}

extern bool error_not_enough_matches(mstick_t *mstick, char **array)
{
	int line = mstick->game.nb_line;
	int detect_matches = 0;
	int i = 0;

	while (array[line][i] != '\0') {
		if (array[line][i] == '|')
			detect_matches+=1;
		++i;
	}
	if (detect_matches < mstick->game.nb_matches) {
		write(1, "Error: not enough matches on this line", 38);
		if (player_get_line(mstick, array) == ERROR)
			return (ERROR);
		if (player_get_matches(mstick, array) == ERROR)
			return (ERROR);
	}
	return (SUCCESS);
}
