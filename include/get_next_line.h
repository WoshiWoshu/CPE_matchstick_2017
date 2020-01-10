/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** libmy
*/

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef READ_SIZE
#define READ_SIZE 1
#endif /* !READ_SIZE */

char *get_next_line(int);
int cpy_str1_to_result(char *str1, char *result);
void cpy_str2_to_result(char *str2, char *result, int j);
char *check_buffer_null(char *buffer);

#endif /* !GET_NEXT_LINE_H */
