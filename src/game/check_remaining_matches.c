/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** functions that check the remaining matches of player and ia
*/

#include <stdbool.h>
#include "stddef.h"
#include "../matchstick.h"

static bool check_remaining_matchstick(int i, char **array)
{
	int j = 0;

	while (array[i][j] != '\0') {
		if (array[i][j] == '|')
			return (REMAIN);
		j++;
	}
	return (CLEAN);
}

extern bool browse_remaining_matchstick(char **array)
{
	int i = 0;

	while (array[i] != NULL) {
		if (check_remaining_matchstick(i, array) == REMAIN)
			return (REMAIN);
		i++;
	}
	return (CLEAN);
}
