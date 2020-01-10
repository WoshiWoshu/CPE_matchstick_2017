/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** functions that set the different struct
*/

#include <stddef.h>
#include "../../include/my.h"
#include "../matchstick.h"

extern void initialisation_main_v_struct(int ac, char **av, mainv_t *mainv)
{
	mainv->agc = ac;
	mainv->agv = av;
}

extern void initialisation_game_struct(game_t *game, mainv_t *mainv)
{
	game->y = my_getnbr(mainv->agv[1]) + 2;
	game->x = (my_getnbr(mainv->agv[1]) * 2) + 1;
	game->first_stick = game->x / 2;
	game->stick_total = 0;
	game->c_stick_total = 0;
	game->last_line = 0;
	game->b_last_line = 0;
	game->n = 0;
	game->p = 0;
	game->line = NULL;
	game->matches = NULL;
	game->nb_line = 0;
	game->nb_matches = 0;
	game->player_lost = false;
	game->ia_lost = false;
	game->ctrl_d = false;
	game->i = 0;
	game->j = 0;
}

extern void assign_map_var_next_sticks(game_t *game)
{
	game->b_last_line = game->last_line - 1;
	game->stick_total = game->x - 2;
	game->c_stick_total = game->stick_total;
	game->n = 1;
	game->p = game->n;
}
