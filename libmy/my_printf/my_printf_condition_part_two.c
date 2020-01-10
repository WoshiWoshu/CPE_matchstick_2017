/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** part2 of content of conditions if in my_printf.c
*/

#include <stdarg.h>
#include "../../include/my_printf.h"
#include "../../include/my.h"

int flag_b(int i, va_list ap)
{
	unsigned int b = 0;

	b = va_arg(ap, unsigned int);
	decimal_to_binary(b);
	i = i + 2;
	return (i);
}

int flag_o(int i, va_list ap)
{
	unsigned int open = 0;

	open = va_arg(ap, unsigned int);
	decimal_to_octal(open);
	i = i + 2;
	return (i);
}

int flag_c(int i, va_list ap)
{
	int c = 0;

	c = va_arg(ap, int);
	my_putchar(c);
	i = i + 2;
	return (i);
}

int flag_x_maj(int i, va_list ap)
{
	unsigned int x_maj = 0;

	x_maj = va_arg(ap, unsigned int);
	decimal_to_hexadecimal_x_maj(x_maj);
	i = i + 2;
	return (i);
}

int flag_s_maj(int i, va_list ap)
{
	char *r;

	r = va_arg(ap, char *);
	for (int v = 0; r[v] != '\0'; v++) {
		if (r[v] >= 127 || r[v] < 32) {
			my_putchar('\\');
			decimal_to_octal_man_ascii(r[v]);
		} else {
			my_putchar(r[v]);
		}
	}
	i = i + 2;
	return (i);
}
