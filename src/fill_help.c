/*
** EPITECH PROJECT, 2023
** fill_help.c
** File description:
** fill help
*/
#include "paint.h"

void fill_about_help(paint_t *p)
{
    if (p->isabclick == true)
        sfRectangleShape_setFillColor(p->about_rect, sfWhite);
    else
        sfRectangleShape_setFillColor(p->about_rect, sfTransparent);
    if (p->isheclick == true)
        sfRectangleShape_setFillColor(p->he_rect, sfWhite);
    else
        sfRectangleShape_setFillColor(p->he_rect, sfTransparent);
}

void check_help(sfMouseButtonEvent event, paint_t *p)
{
    if (event.x >= (87 * p->scale_x) && event.x <= (387 * p->scale_x) &&
        event.y >= (694 * p->scale_y) && event.y <= (742 * p->scale_y)) {
        if (p->isabclick == false) {
            p->isabclick = true; p->isheclick = false;
        } else
            p->isabclick = false;
    }
    if (event.x >= (87 * p->scale_x) && event.x <= (387 * p->scale_x) &&
        event.y >= (776 * p->scale_y) && event.y <= (823 * p->scale_y)) {
        if (p->isheclick == false) {
            p->isheclick = true; p->isabclick = false;
        } else
            p->isheclick = false;
    }
}
