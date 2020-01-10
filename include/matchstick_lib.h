/*
** EPITECH PROJECT, 2018
** lib
** File description:
** lib matchstick
*/

#ifndef _MY_MATCHSTICK_LIB_H_
#define _MY_MATCHSTICK_LIB_H_

#define SIZE 500

void to_draw_first_columns_lines(short x, short y, char array[y][x]);
void to_draw_last_columns(short x, short last_line, char array[0][x]);
void make_first_line(int x, int y, char **array);
void make_last_line(int x, int last_line, char **array);

#endif /* _MY_MATCHSTICK_LIB_H_ */
