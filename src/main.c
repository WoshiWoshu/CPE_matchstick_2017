/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** core function
*/

#include <time.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include "matchstick.h"
#include "../include/my_sokoban.h"
#include "../include/my.h"

static bool error_main_handle(int ac)
{
	if (ac != 3) {
		write(2, "Bad parameter", 13);
		return (ERROR);
	}
	return (SUCCESS);
}

int main(int ac, char **av)
{
	mstick_t mstick;
	char **array;

	if (error_main_handle(ac) == ERROR)
		return (84);
	initialisation_main_v_struct(ac, av, &mstick.mainv);
	initialisation_game_struct(&mstick.game, &mstick.mainv);
	array = malloc(sizeof(char *) * (mstick.game.y) * (mstick.game.x) + 2);
	srandom(time(NULL));
	for (;;) {
		matchstick(&mstick, array);
		if (mstick.game.ia_lost == true)
			return (1);
		if (mstick.game.player_lost == true)
			return (2);
		if (mstick.game.ctrl_d == true)
			return (0);
	}
	free(array);
	return (SUCCESS);
}
