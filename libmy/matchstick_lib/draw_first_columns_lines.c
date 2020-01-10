/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick lib
*/

#include <stdlib.h>

void make_first_line(int x, int y, char **array)
{
	int i = 0;

	array[i] = malloc(sizeof(char) * x + 2);
	for (i = 0; i < x; ++i) {
		array[0][i] = '*';
	}
	array[0][i] = '\n';
	array[0][i + 1] = '\0';
}

void make_last_line(int x, int last_line, char **array)
{
	int i = 0;

	for (i = 0; i < x; ++i) {
		array[last_line][i] = '*';
	}
	array[last_line][i] = '\n';
	array[last_line][i + 1] = '\0';
	array[last_line + 1] = NULL;
}

void to_draw_first_columns_lines(short x, short y, char array[y][x])
{
	for (long i = 0; i < x; i++) {
		array[0][i] = '*';
	}
	for (long j = 0; j < y; j++) {
		array[j][0] = '*';
	}
}

void to_draw_last_columns(short x, short last_line, char array[0][x])
{
	for (long i = 0; i < x; i++) {
		array[last_line][i] = '*';
	}
}
