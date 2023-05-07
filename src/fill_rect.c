/*
** EPITECH PROJECT, 2023
** fill_rect.c
** File description:
** fill_rect
*/
#include "paint.h"

void check_exit(sfMouseButtonEvent event, paint_t *p)
{
    if (event.x >= (1647 * p->scale_x) && event.x <= (1777 * p->scale_x) &&
        event.y >= (919 * p->scale_y) && event.y <= (974 * p->scale_y)) {
        p->isabclick = false;
        sfRectangleShape_setFillColor(p->about_rect, sfTransparent);
    }
    if (event.x >= (1647 * p->scale_x) && event.x <= (1777 * p->scale_x) &&
        event.y >= (919 * p->scale_y) && event.y <= (974 * p->scale_y)) {
        p->isheclick = false;
        sfRectangleShape_setFillColor(p->he_rect, sfTransparent);
    }
}

void fill_file_rect(sfMouseButtonEvent event, paint_t *p)
{
    if (event.x >= (64 * p->scale_x) && event.x <= (416 * p->scale_x) &&
        event.y >= (273 * p->scale_y) && event.y <= (349 * p->scale_y)) {
        if (p->isfileopen == false && p->isabclick == false &&
            p->isheclick == false) {
            p->isfileopen = true; p->iseditopen = false; p->ishelpopen = false;
            sfRectangleShape_setFillColor(p->file_rect, sfWhite);
            sfRectangleShape_setFillColor(p->edition_rect, sfTransparent);
            sfRectangleShape_setFillColor(p->help_rect, sfTransparent);
        } else {
            p->isfileopen = false;
            sfRectangleShape_setFillColor(p->file_rect, sfTransparent);
        }
    }
}

void fill_edit_rect(sfMouseButtonEvent event, paint_t *p)
{
    if (event.x >= (64 * p->scale_x) && event.x <= (416 * p->scale_x) &&
        event.y >= (431 * p->scale_y) && event.y <= (509 * p->scale_y)) {
        if (p->iseditopen == false && p->isabclick == false &&
            p->isheclick == false) {
            p->iseditopen = true; p->isfileopen = false; p->ishelpopen = false;
            sfRectangleShape_setFillColor(p->edition_rect, sfWhite);
            sfRectangleShape_setFillColor(p->file_rect, sfTransparent);
            sfRectangleShape_setFillColor(p->help_rect, sfTransparent);
        } else {
            p->iseditopen = false;
            sfRectangleShape_setFillColor(p->edition_rect, sfTransparent);
        }
    }
}

void fill_help_rect(sfMouseButtonEvent event, paint_t *p)
{
    if (event.x >= (64 * p->scale_x) && event.x <= (416 * p->scale_x) &&
        event.y >= (591 * p->scale_y) && event.y <= (668 * p->scale_y)) {
        if (p->ishelpopen == false && p->isabclick == false &&
            p->isheclick == false) {
            p->ishelpopen = true; p->iseditopen = false; p->isfileopen = false;
            sfRectangleShape_setFillColor(p->help_rect, sfWhite);
            sfRectangleShape_setFillColor(p->edition_rect, sfTransparent);
            sfRectangleShape_setFillColor(p->file_rect, sfTransparent);
        } else {
            p->ishelpopen = false; p->isabclick = false; p->isheclick = false;
            sfRectangleShape_setFillColor(p->help_rect, sfTransparent);
            sfRectangleShape_setFillColor(p->about_rect, sfTransparent);
            sfRectangleShape_setFillColor(p->he_rect, sfTransparent);
        }
    }
}
