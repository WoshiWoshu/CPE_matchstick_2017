##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

CC	=	gcc -Wall -Wextra

FLAG	=	-I /include

RM	=	rm -f

SRC	=	./src/core/set_map.c				\
		./src/core/fill_struct.c			\
		./src/core/display_txt.c			\
		./src/core/matchstick.c				\
		./src/game/ask_line_matches.c			\
		./src/game/error_handle_player_line.c		\
		./src/game/error_handle_player_matches.c	\
		./src/game/player_ia_get_line_matches.c		\
		./src/game/player_ia_remove_matches.c		\
		./src/game/check_remaining_matches.c		\
		./src/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

all	:	$(NAME)

$(NAME)	:	$(OBJ)
	$(MAKE) -C ./libmy
	$(CC) $(OBJ) -o $(NAME) -L ./libmy -l my

clean	:
	$(RM) $(OBJ)

fclean	:	clean
	make -C libmy fclean
	$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all fclean clean re
