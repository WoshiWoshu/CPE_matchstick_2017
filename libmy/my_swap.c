/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** libmy
*/

#include <unistd.h>
#include "../include/my.h"

void my_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
