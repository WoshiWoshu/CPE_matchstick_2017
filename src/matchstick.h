/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick header
*/

#ifndef _MATCHSTICK_H_
#define _MATCHSTICK_H_

#include <stdbool.h>

typedef struct mstick_s mstick_t;

typedef struct mainv_s {
	int agc;
	char **agv;
} mainv_t;

typedef struct game_s {
	int x;
	int y;
	int b_last_line;
	int first_stick;
	int stick_total;
	int c_stick_total;
	int last_line;
	char *line;
	char *matches;
	int nb_line;
	int nb_matches;
	int n;
	int p;
	int player_lost;
	int ia_lost;
	int ctrl_d;
	int j;
	int i;
} game_t;

struct mstick_s {
	game_t game;
	mainv_t mainv;
};

enum return_val_e {
	SUCCESS,
	ERROR,
	CTRL_D,
	PLAYER_LOST,
	IA_LOST,
};

enum check_matches_e {
	CLEAN,
	REMAIN,
};

extern void to_map(int x, int y, char **array, game_t *game);
extern void assign_map_var_next_sticks(game_t *game);
extern void initialisation_game_struct(game_t *game, mainv_t *mainv);
extern void initialisation_main_v_struct(int ac, char **av, mainv_t *mainv);
extern void display_player_turn(void);
extern void display_ask_line(void);
extern void display_ask_matches(void);
extern bool ask_line(mstick_t *mstick);
extern bool ask_matches(mstick_t *mstick);
extern bool player_get_line(mstick_t *mstick, char **array);
extern bool error_line_pos_number(mstick_t *mstick, char **array);
extern bool error_line_out_of_range(mstick_t *mstick, char **array);
extern bool player_get_matches(mstick_t *mstick, char **array);
extern bool error_matches_inferior_to_zero(mstick_t *mstick, char **array);
extern bool error_matches_pos_number(mstick_t *mstick, char **array);
extern bool error_matches_too_much(mstick_t *mstick, char **array);
extern bool error_not_enough_matches(mstick_t *mstick, char **array);
extern void display_player_removed(mstick_t *mstick);
extern void player_remove_matches(mstick_t *mstick, char **array);
extern void ia_remove_matches(mstick_t *mstick, char **array);
extern bool browse_remaining_matchstick(char **array);
extern void display_ia_removed(mstick_t *mstick);
extern void to_smallest_map(int x, int y, char **array, game_t *game);
extern int matchstick(mstick_t *mstick,
	char **array);

#endif /* _MATCHSTICK_H_ */
