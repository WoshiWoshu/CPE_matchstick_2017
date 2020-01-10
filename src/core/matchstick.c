/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick core functions
*/

#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include "../matchstick.h"
#include "../../include/my_sokoban.h"
#include "../../include/my.h"

static bool player(mstick_t *mstick,
	char **array)
{
	display_player_turn();
	if (player_get_line(mstick, array) == ERROR)
		return (ERROR);
	if (player_get_matches(mstick, array) == ERROR)
		return (ERROR);
	player_remove_matches(mstick, array);
	display_player_removed(mstick);
	to_print_2d_array_dynamic(array);
	return (SUCCESS);
}

static void ia(mstick_t *mstick,
	char **array)
{
	ia_remove_matches(mstick, array);
	display_ia_removed(mstick);
	to_print_2d_array_dynamic(array);
}

static void map(mstick_t *mstick,
	char **array)
{
	static bool make_map = true;

	if (make_map == true) {
		if (my_getnbr(mstick->mainv.agv[1]) != 1)
			to_map(mstick->game.x, mstick->game.y,
			array, &mstick->game);
		else {
			to_smallest_map(mstick->game.x, mstick->game.y,
			array, &mstick->game);
		}
		to_print_2d_array_dynamic(array);
		make_map = false;
	}
}

extern int matchstick(mstick_t *mstick,
	char **array)
{
	map(mstick, array);
	if (player(mstick, array) == ERROR) {
		mstick->game.ctrl_d = true;
		return (CTRL_D);
	}
	if (browse_remaining_matchstick(array) == CLEAN) {
		my_putstr("You lost, too bad...");
		mstick->game.player_lost = true;
		return (PLAYER_LOST);
	}
	ia(mstick, array);
	if (browse_remaining_matchstick(array) == CLEAN) {
		my_putstr("I lost... snif... but I'll get you next time!!");
		mstick->game.ia_lost = true;
		return (IA_LOST);
	}
	return (SUCCESS);
}
