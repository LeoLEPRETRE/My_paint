/*
** EPITECH PROJECT, 2023
** save_file.c
** File description:
** save_file
*/
#include "paint.h"

void define_version(paint_t *p, char *str)
{
    if (my_strcmp(str, "1") == 24) {
        p->version = ".png";
        p->isgoodversion = true;
    }
    if (my_strcmp(str, "2") == 24) {
        p->version = ".jpg";
        p->isgoodversion = true;
    }
    if (my_strcmp(str, "3") == 24) {
        p->version = ".bmp";
        p->isgoodversion = true;
    }
    if (my_strcmp(str, "4") == 24) {
        p->version = ".tga"; p->isgoodversion = true;
    }
    if (my_strcmp(str, "1") != 24 && my_strcmp(str, "2") != 24 &&
        my_strcmp(str, "3") != 24 && my_strcmp(str, "4") != 24) {
        p->isgoodversion = false;
        my_printf("Please enter a valable version.\n");
    }
}

int def_version(paint_t *p)
{
    char *str;
    while (p->isgoodversion == false) {
        my_printf("Please enter your choice > ");
        if (check_getstr(p) == 84)
            return 84;
        str = malloc(sizeof(char) * my_strlen(p->input_str));
        int i = 0;
        for (; p->input_str[i] != '\n'; i++)
            str[i] = p->input_str[i];
        str[i] = '\0';
        define_version(p, str);
    }
    return 0;
}

int check_name(paint_t *p, char *str1)
{
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '/' || str1[i] == 92) {
            p->isgoodname = false;
            my_printf("Please enter a valid name.\n");
            return 0;
        }
    }
    p->isgoodname = true;
    p->file_name = str1;
    return 0;
}

int def_name(paint_t *p)
{
    char *str1;
    while (p->isgoodname == false) {
        my_printf("Please enter the name of your file > ");
        if (check_getstr(p) == 84)
            return 84;
        str1 = malloc(sizeof(char) * my_strlen(p->input_str));
        int i = 0;
        for (; p->input_str[i] != '\n'; i++)
            str1[i] = p->input_str[i];
        str1[i] = '\0';
        check_name(p, str1);
    }
    return 0;
}
