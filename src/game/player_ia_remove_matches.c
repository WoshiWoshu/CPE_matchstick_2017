/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** functions that remove the matches given by the player
*/

#include <stdlib.h>
#include <stdbool.h>
#include "../matchstick.h"
#include "../../include/my.h"

static int reach_and_remove_matches(mstick_t *mstick, char **array)
{
	int line = mstick->game.nb_line;
	int matches = mstick->game.nb_matches;
	int detect_m = (mstick->game.x) - 2;
	bool check_ai = false;

	mstick->game.p = 0;
	while (array[line][detect_m] != '*') {
		if (array[line][detect_m] == '|') {
			array[line][detect_m] = ' ';
			check_ai = true;
			mstick->game.p++;
			matches--;
		}
		if (matches == 0)
			break;
		--detect_m;
	}
	return (check_ai);
}

static int make_random(const int min, const int max)
{
	int num;

	num = (random() % (max - min + 1)) + min;
	return (num);
}

extern void ia_remove_matches(mstick_t *mstick, char **array)
{
	int av_1 = my_getnbr(mstick->mainv.agv[1]);
	int av_2 = my_getnbr(mstick->mainv.agv[2]);
	int check_ai = false;

	while (check_ai == false) {
		mstick->game.nb_line = make_random(1, av_1);
		mstick->game.nb_matches = make_random(1, av_2);
		check_ai = reach_and_remove_matches(mstick, array);
	}
}

extern void player_remove_matches(mstick_t *mstick, char **array)
{
	reach_and_remove_matches(mstick, array);
}
