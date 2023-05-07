/*
** EPITECH PROJECT, 2023
** check_circle.c
** File description:
** check_circle
*/
#include "paint.h"

void check_circle(sfMouseButtonEvent event, paint_t *p)
{
    if (event.x >= (404 * p->scale_x) && event.x <= (449 * p->scale_x) &&
        event.y >= (533 * p->scale_y) && event.y <= (578 * p->scale_y)) {
        if (p->penIsCircle == true)
            p->penIsCircle = false;
        else
            p->penIsCircle = true;
    }
    if (event.x >= (404 * p->scale_x) && event.x <= (449 * p->scale_x) &&
        event.y >= (615 * p->scale_y) && event.y <= (660 * p->scale_y)) {
        if (p->erIsCircle == true)
            p->erIsCircle = false;
        else
            p->erIsCircle = true;
    }
}
