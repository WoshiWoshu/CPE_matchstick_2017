/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** functions that display the txt
*/

#include "../../include/my.h"
#include "../../include/my_printf.h"
#include "../matchstick.h"

extern void display_player_turn(void)
{
	my_putstr("\nYour turn:");
}

extern void display_ask_line(void)
{
	my_putstr("\nLine: ");
}

extern void display_ask_matches(void)
{
	my_putstr("Matches: ");
}

extern void display_player_removed(mstick_t *mstick)
{
	my_printf("Player removed ");
	my_printf("%d match(es) ", mstick->game.nb_matches);
	my_putstr("from line ");
	my_put_nbr(mstick->game.nb_line);
	my_putstr("\n");
}

extern void display_ia_removed(mstick_t *mstick)
{
	my_printf("\nAI's turn...\n");
	my_putstr("AI removed ");
	my_put_nbr(mstick->game.p);
	my_putstr(" match(es) from line ");
	my_put_nbr(mstick->game.nb_line);
	my_putstr("\n");
}
