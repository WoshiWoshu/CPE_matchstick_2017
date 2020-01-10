/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** other usefull get_next_line functions
*/

#include <stddef.h>

char *check_buffer_null(char *buffer)
{
	if (buffer == NULL)
		return (NULL);
	if (buffer[0] == 0)
		return (NULL);
	return (buffer);
}

void cpy_str2_to_result(char *str2, char *result, int j)
{
	int i = -1;

	while (str2[++i])
		result[++j] = str2[i];
	result[++j] = 0;
}

int cpy_str1_to_result(char *str1, char *result)
{
	int i = -1;
	int j = -1;

	while (str1[++i])
		result[++j] = str1[i];
	return (j);
}
