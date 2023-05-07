##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## makefile
##

SRC	=	my_putchar.c	\
		my_compute_power_rec.c	\
		my_compute_square_root.c	\
		my_find_prime_sup.c	\
		my_getnbr.c	\
		my_getfloat.c	\
		my_isneg.c	\
		my_is_prime.c	\
		my_revstr.c	\
		my_showmem.c	\
		my_showstr.c	\
		my_sort_int_array.c	\
		my_strcapitalize.c	\
		my_strcmp.c	\
		my_str_isalpha.c	\
		my_str_islower.c	\
		my_str_isnum.c	\
		my_str_isprintable.c	\
		my_str_isupper.c	\
		my_strlowcase.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		my_strstr.c	\
		my_str_to_word_array.c	\
		my_strupcase.c	\
		my_swap.c	\
		my_putstr.c	\
		my_strcpy.c	\
		my_strlen.c	\
		my_strcat.c	\
		my_strdup.c	\
		my_put_nbr.c	\
		my_printf.c	\
		percent.c	\
		percent_2.c	\
		percent_3.c	\
		strings.c	\
		my_put_nbr.c	\
		my_put_float.c 	\
		modifiers.c	\
		clean_str.c	\
		my_eprintf.c	\
		error_percent.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS =	-W -Wall -Wextra -I../../include

LFLAGS =	-g -Llib/my -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f "*~"
	rm -f "~*"
	rm -f "#*#"
	rm -f "*.o"
	rm -f "*#"
	rm -f "#*"
	rm -f "Makefile~"
	rm -f "my.h~"
	rm -f "#*.c#"
	rm -f ~/coding-style-reports.log

fclean:	clean
	rm -f $(NAME)
	rm -f libmy.a
	rm -f ../../lib/libmy.a

re:	fclean all

.PHONY: all fclean clean re
