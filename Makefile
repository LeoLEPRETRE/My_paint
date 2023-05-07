##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## gcc
##

SRC	=	src/main.c	\
		src/sprite.c	\
		src/utils.c	\
		src/contour.c \
		src/fill_rect.c \
		src/contour2.c \
		src/contour3.c \
		src/contour4.c \
		src/fill_edit.c \
		src/fill_help.c \
		src/check_circle.c \
		src/create_rectangles/init_rectangles.c	\
		src/create_sprites/init_sprites.c	\
		src/create_text/init_texts.c	\
		src/create_text/help_phrase.c \
		src/event.c	\
		src/create_images/init_images.c	\
		src/colors/colors.c	\
		src/colors/give_color.c	\
		src/colors/pipette.c	\
		src/draw/draw.c	\
		src/draw/circle_pencil.c	\
		src/draw/rectangle_pencil.c	\
		src/menu_file.c \
		src/input.c \
		src/save_file.c \
		src/draw_rect_ci_opt.c \
		src/open_file.c \
		src/draw/erase.c	\
		src/forms/circle.c	\
		src/forms/rectangle.c	\
		src/check_asset.c \

NAME	=	my_paint

OBJ	=	$(SRC:.c=.o)

LIB =	lib/my/libmy.a

LDLIBS = -lmy -lcsfml-graphics

LFLAGS = -L lib/my -l csfml-window -l csfml-system -l csfml-audio

CFLAGS =	-W -Wall -Wextra -g -lncurses -Iinclude

VALGRIND =	-ggdb3

all:	$(LIB) $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(LDLIBS) $(LFLAGS) $(LFLAGS) $(CFLAGS) -lm

debug:	$(LIB)
	gcc -o $(NAME) $(SRC) $(LDLIBS) $(LFLAGS) $(CFLAGS) $(VALGRIND) -g

$(LIB):
	$(MAKE) -C lib/my/

clean:
	$(MAKE) -C lib/my/ clean
	rm -rf $(OBJ)

fclean:     clean
	$(MAKE) -C lib/my fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re
