/*
** EPITECH PROJECT, 2023
** open_file.c
** File description:
** open_file
*/
#include "paint.h"

void exist_file(paint_t *p, char *str)
{
    if (sfImage_createFromFile(str) != NULL) {
        sfVector2f pos_rect = {482, 278}; sfVector2f size_rect = {928, 513};
        p->rectangle_draw = my_getrect(pos_rect, size_rect, sfWhite);
        p->no_image = sfImage_createFromFile(str);
        p->no_image_texture = sfTexture_createFromImage(p->no_image, NULL);
        sfRectangleShape_setTexture(p->rectangle_draw, p->no_image_texture,
        false);
        p->isvalidfile = true;
    } else {
        my_printf("No such file please retry.\n");
        p->isvalidfile = false;
    }
}

int check_valid(paint_t *p)
{
    char *str;
    while (p->isvalidfile == false) {
        my_printf("Enter the path of your file > ");
        if (check_getstr(p) == 84)
            return 84;
        str = malloc(sizeof(char) * my_strlen(p->input_str));
        int i = 0;
        for (; p->input_str[i] != '\n'; i++)
            str[i] = p->input_str[i];
        str[i] = '\0';
        exist_file(p, str);
    }
    my_printf("DONE !\n\n");
    return 0;
}
