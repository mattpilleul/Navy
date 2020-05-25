##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC	=	gcc

AR	=	ar rc

CFLAGS	=	-I./include

NAME	=	libmy_printf.a

RM	=	rm -f

SRCS	=		my_printf.c\
		no_print_str.c	\
		put_nbr_bin.c	\
		put_nbr_hex.c	\
		put_nbr_hexa_min.c\
		size_nbr.c	\
		unsigned_int.c	\
		put_nbr_oct.c	\
		my_putstr.c	\
		my_str_checker.c\
		my_put_nbr.c	\
		my_revstr.c	\
		my_putchar.c	\
		my_strlen.c	\
		manage_space.c	\
		show_arguments.c\
		display_base.c	\
		special_case.c	\
		manage_hashtag.c\
		double_char.c

OBJS	=	$(SRCS:.c=.o)

CPLIB	=	cp $(NAME) ../../	\
	&&	cp include/my_printf.h ../../include/

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(CPLIB)

$(OBJS):
	$(CC) -c $(SRCS) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all