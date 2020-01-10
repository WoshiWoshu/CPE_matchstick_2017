/*
** EPITECH PROJECT, 2018
** lib
** File description:
** lib
*/

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../include/my_sokoban.h"
#include "../../include/my_printf.h"
#include "../../include/my.h"

void to_print_2d_array(int y, int x, char array[y][x])
{
	for (int k = 0; k < y; k++) {
		for (int j = 0; j < x; j++)
			my_printf("%c", array[k][j]);
		my_putstr("\n");
	}
}

void to_print_2d_array_dynamic(char **array)
{
	int i = 0;

	while (array[i] != NULL) {
		my_printf("%s", array[i]);
		i++;
	}
}
