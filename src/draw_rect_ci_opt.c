/*
** EPITECH PROJECT, 2023
** draw_rect_ci.c
** File description:
** draw_rect and circle option
*/
#include "paint.h"

void draw_rcopt(sfRenderWindow *window, paint_t *p)
{
    if (p->penIsCircle == true)
        sfRenderWindow_drawCircleShape(window, p->ci_option1, NULL);
    else
        sfRenderWindow_drawRectangleShape(window, p->rect_option1, NULL);
    if (p->erIsCircle == true)
        sfRenderWindow_drawCircleShape(window, p->ci_option2, NULL);
    else
        sfRenderWindow_drawRectangleShape(window, p->rect_option2, NULL);
}
