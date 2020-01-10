/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** functions that return a random number between x and y
*/

#include <stdlib.h>

int make_random(const int min, const int max)
{
	int num;

	num = (random() % (max - min + 1)) + min;
	return (num);
}
