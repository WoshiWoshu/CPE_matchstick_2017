/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** save the line and matches enter by the player
*/

#include <stdbool.h>
#include "../matchstick.h"

extern bool player_get_line(mstick_t *mstick, char **array)
{
	if (ask_line(mstick) == ERROR)
		return (ERROR);
	if (error_line_pos_number(mstick, array) == ERROR)
		return (ERROR);
	if (error_line_out_of_range(mstick, array) == ERROR)
		return (ERROR);
	return (SUCCESS);
}

extern bool player_get_matches(mstick_t *mstick, char **array)
{
	if (ask_matches(mstick) == ERROR)
		return (ERROR);
	if (error_matches_pos_number(mstick, array) == ERROR)
		return (ERROR);
	if (error_matches_inferior_to_zero(mstick, array) == ERROR)
		return (ERROR);
	if (error_matches_too_much(mstick, array) == ERROR)
		return (ERROR);
	if (error_not_enough_matches(mstick, array) == ERROR)
		return (ERROR);
	return (SUCCESS);
}
