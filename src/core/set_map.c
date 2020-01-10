/*
** EPITECH PROJECT, 2018
** minishell
** File description:
** set the map
*/

#include <stdlib.h>
#include "../matchstick.h"
#include "../../include/matchstick_lib.h"
#include "../../include/my.h"

static void
	place_first_stick_and_next_line_check(int x, char **array,
	game_t *game)
{
	if (game->j == x - 1 || game->j == 0)
		array[game->i][game->j] = '*';
	else if (game->j == game->first_stick)
		array[game->i][game->j] = '|';
	else
		array[game->i][game->j] = ' ';
}

static void
	place_first_stick_and_next_line(int x, int y,
	char **array, game_t *game)
{
	int i = 0;
	int j = 0;

	for (i = 1; i < y; i++) {
		array[i] = malloc(sizeof(char) * x + 2);
		for (j = 0; j < x; ++j) {
			game->i = i;
			game->j = j;
			place_first_stick_and_next_line_check(x, array, game);
		}
		array[i][j] = '\n';
		array[i][j + 1] = '\0';
		game->last_line = i;
	}
}

static void browse_back_and_place_next_sticks
	(char **array, game_t *game)
{
	assign_map_var_next_sticks(game);
	while (1) {
		while (game->c_stick_total != 0) {
			array[game->b_last_line][game->p] = '|';
			game->p++;
			game->c_stick_total--;
		}
		game->b_last_line--;
		game->stick_total = game->stick_total - 2;
		game->c_stick_total = game->stick_total;
		game->n++;
		game->p = game->n;
		if (game->n == game->first_stick)
			break;
	}
}

extern void to_map(int x, int y, char **array, game_t *game)
{
	make_first_line(x, y, array);
	place_first_stick_and_next_line(x, y, array, game);
	make_last_line(x, game->last_line, array);
	browse_back_and_place_next_sticks(array, game);
}

extern void to_smallest_map(int x, int y, char **array, game_t *game)
{
	make_first_line(x, y, array);
	place_first_stick_and_next_line(x, y, array, game);
	make_last_line(x, game->last_line, array);
}
