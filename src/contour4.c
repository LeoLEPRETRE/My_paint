/*
** EPITECH PROJECT, 2023
** contour4.c
** File description:
** contour 4
*/
#include "paint.h"

void set_color2(paint_t *p)
{
    sfRectangleShape_setOutlineColor(p->rect1_bck, sfBlack);
    if (p->penIsCircle == true)
        sfCircleShape_setFillColor(p->ci_option1, sfBlack);
    else
        sfRectangleShape_setFillColor(p->rect_option1, sfBlack);
}

void set_color3(paint_t *p)
{
    sfRectangleShape_setOutlineColor(p->rect2_bck, sfWhite);
    if (p->erIsCircle == true)
        sfCircleShape_setFillColor(p->ci_option2, sfWhite);
    else
        sfRectangleShape_setFillColor(p->rect_option2, sfWhite);
}

void set_color4(paint_t *p)
{
    sfRectangleShape_setOutlineColor(p->rect2_bck, sfBlack);
    if (p->erIsCircle == true)
        sfCircleShape_setFillColor(p->ci_option2, sfBlack);
    else
        sfRectangleShape_setFillColor(p->rect_option2, sfBlack);
}

void rect_and_circle_contour2(paint_t *p, sfRenderWindow *window)
{
    int x = sfMouse_getPositionRenderWindow(window).x;
    int y = sfMouse_getPositionRenderWindow(window).y;
    if (x >= (404 * p->scale_x) && x <= (449 * p->scale_x)) {
        if (y >= (615 * p->scale_y) && y <= (660 * p->scale_y)) {
            set_color3(p);
        } else {
            set_color4(p);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->rect2_bck, sfBlack);
        if (p->erIsCircle == true)
            sfCircleShape_setFillColor(p->ci_option2, sfBlack);
        else
            sfRectangleShape_setFillColor(p->rect_option2, sfBlack);
    }
}
