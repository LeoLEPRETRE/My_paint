/*
** EPITECH PROJECT, 2023
** menu_file.c
** File description:
** menu file
*/
#include "paint.h"

void print_version(void)
{
    my_printf("You can choose different versions for your picture:\n");
    my_printf("\t tap 1 for png\n");
    my_printf("\t tap 2 for jpg\n");
    my_printf("\t tap 3 for bmp\n");
    my_printf("\t tap 4 for tga\n\n");
    my_printf("(BEWARE! CTRL + D will force exit the program)\n\n");
}

void new_file(sfMouseButtonEvent event, paint_t *p, sfRenderWindow *window)
{
    if (event.x >= (87 * p->scale_x) && event.x <= (387 * p->scale_x) &&
        event.y >= (457 * p->scale_y) && event.y <= (504 * p->scale_y)) {
        start(p, window);
    }
}

void save_file(sfMouseButtonEvent event, paint_t *p)
{
    if (event.x >= (87 * p->scale_x) && event.x <= (387 * p->scale_x) &&
        event.y >= (538 * p->scale_y) && event.y <= (585 * p->scale_y)) {
        p->issfClick = true; p->isofClick = false;
    }
}

void open_file(sfMouseButtonEvent event, paint_t *p)
{
    if (event.x >= (87 * p->scale_x) && event.x <= (387 * p->scale_x) &&
        event.y >= (374 * p->scale_y) && event.y <= (422 * p->scale_y)) {
        p->issfClick = false; p->isofClick = true;
    }
}

int gestion(paint_t *p)
{
    if (p->issfClick == true) {
        print_version();
        if (def_version(p) == 84)
            return 84;
        if (def_name(p) == 84)
            return 84;
        char *str_final = my_strcat(p->file_name, p->version);
        sfImage_saveToFile(p->no_image, str_final);
        my_printf("DONE !\n");
        my_printf("\n");
        p->isgoodversion = false; p->isgoodname = false;
        p->issfClick = false;
    }
    if (p->isofClick == true) {
    my_printf("(BEWARE! CTRL + D will force exit the program)\n\n");
        if (check_valid(p) == 84)
            return 84;
        p->isofClick = false; p->isvalidfile = false;
    }
    return 0;
}
