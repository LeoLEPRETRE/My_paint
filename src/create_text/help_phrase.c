/*
** EPITECH PROJECT, 2023
** help_phrase.c
** File description:
** help phrases
*/
#include "paint.h"

char *phrases_help(void)
{
    char *str = "My_paint allows you to draw on a computer.\n\nTo draw,";
    char *str2 = " please select the Edit menu where different tools ";
    char *str3 = "are selectable in order to make your drawing ";
    char *str4 = "(pencil, eraser, etc...).\nYou can change the size ";
    char *str5 = "of your tool with the different sizes offered under";
    char *str6 = " the notepad.\nYou can also change the colour of";
    char *str7 = " your pencil on the right of the screen.";
    char *str8 = "\n\nTo open a file, save it or open ";
    char *str9 = "a new page, please go to the File menu.";
    char *str_v1 = my_strcat(str, str2);
    char *str_v2 = my_strcat(str_v1, str3);
    char *str_v3 = my_strcat(str_v2, str4);
    char *str_v4 = my_strcat(str_v3, str5);
    char *str_v5 = my_strcat(str_v4, str6);
    char *str_v6 = my_strcat(str_v5, str7);
    char *str_v7 = my_strcat(str_v6, str8);
    char *str_final = my_strcat(str_v7, str9);
    return str_final;
}

void help_phrase1(paint_t *p)
{
    char *str = phrases_help();
    sfVector2f pos_str = {167, 300}; int size_char = 35;
    p->hp = my_gettext(str, "assets/Baxoe.ttf", pos_str, size_char);
}
