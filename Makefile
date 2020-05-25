##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

ARRC		= ar crs

CC			= gcc

RM			= rm -rf

MK			= make

SRC_BIN= 	src/check_win.c \
		src/connect_users.c \
		src/display_maps.c \
		src/error_checks.c \
		src/error_map.c \
		src/error_pos.c	\
		src/navy_const_user1.c \
		src/navy_const_user2.c \
		src/navy_const_ship.c \
		src/hit_manage.c \
		src/load_maps.c	\
		src/bytes.c	\
		src/navy_algo.c \
		src/move_transfer.c \
		src/file_manager.c \
		src/main.c	\
		src/redirect_signals.c	\
		src/user1_connection.c	\
		lib/my/my_putchar.c	\
		lib/my/my_putstr.c	\
		lib/my/my_strchr.c	\
		lib/my/my_strcmp.c	\
		lib/my/my_strlen.c	\
		lib/my/my_strdup.c	\
		lib/my/my_str_to_word_array.c	\
		lib/my/my_strchrnul.c	\
		lib/my/my_strcpy.c	\
		lib/my/get_next_line.c	\
		lib/my/my_put_nbr.c	\
		lib/my/word_counter.c	\
		lib/my/clean_str.c	\
		lib/my/my_getnbr.c

OBJ_BIN			= $(SRC_BIN:.c=.o)

CFLAGS			+= -I ./include/
CFLAGS			+= -I ./lib/my_printf/include/
CFLAGS			+= -W -Wall -Wextra

LDFLAGS			+= -L./lib/my_printf -lmy_printf

NAME_BIN		= navy

NAME_PRINT		= lib/my_printf/

$(NAME_BIN):		$(OBJ_BIN)
			$(MK) -C $(NAME_PRINT)
			$(CC) -o $(NAME_BIN) $(OBJ_BIN) $(LDFLAGS)

all:			$(NAME_BIN)

clean:
			$(RM) $(OBJ_BIN)
			$(MK) clean -C $(NAME_PRINT)

fclean:			clean
			$(RM) $(NAME_BIN)
			$(MK) fclean -C $(NAME_PRINT)

re:			fclean all

.PHONY:			all clean fclean re
