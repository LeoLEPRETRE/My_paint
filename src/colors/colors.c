/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** colors.c
*/
#include "paint.h"
#include "SFML/Graphics.h"

void update_colors(sfEvent event, paint_t *p)
{
    if (event.mouseButton.x >= (1534 * p->scale_x) &&
        event.mouseButton.x <= (1695 * p->scale_x)) {
        if (event.mouseButton.y >= (288 * p->scale_y) &&
            event.mouseButton.y <= (645 * p->scale_y)) {
            check_line_color(event, p);
        }
    }
}

void check_line_color2(sfEvent event, paint_t *p)
{
    if (event.mouseButton.y >= (540 * p->scale_y) &&
        event.mouseButton.y <= (583 * p->scale_y)) {
        check_fifth_line_color(event, p);
    }
    if (event.mouseButton.y >= (602 * p->scale_y) &&
        event.mouseButton.y <= (643 * p->scale_y)) {
        check_sixth_line_color(event, p);
    }
}

void check_line_color(sfEvent event, paint_t *p)
{
    if (event.mouseButton.y >= (288 * p->scale_y) &&
        event.mouseButton.y <= (329 * p->scale_y)) {
        check_first_line_color(event, p);
    }
    if (event.mouseButton.y >= (349 * p->scale_y) &&
        event.mouseButton.y <= (392 * p->scale_y)) {
        check_second_line_color(event, p);
    }
    if (event.mouseButton.y >= (412 * p->scale_y) &&
        event.mouseButton.y <= (456 * p->scale_y)) {
        check_third_line_color(event, p);
    }
    if (event.mouseButton.y >= (476 * p->scale_y) &&
        event.mouseButton.y <= (519 * p->scale_y)) {
        check_fourth_line_color(event, p);
    }
    check_line_color2(event, p);
}

void check_first_line_color(sfEvent event, paint_t *p)
{
    if (event.mouseButton.x >= (1534 * p->scale_x) &&
        event.mouseButton.x <= (1577 * p->scale_x)) {
        p->color = sfImage_getPixel(p->all_colors_image, 40, 40);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
    if (event.mouseButton.x >= (1593 * p->scale_x) &&
        event.mouseButton.x <= (1636 * p->scale_x)) {
        p->color = sfImage_getPixel(p->all_colors_image, 90, 40);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
    if (event.mouseButton.x >= (1652 * p->scale_x) &&
        event.mouseButton.x <= (1695 * p->scale_x)) {
        p->color = sfImage_getPixel(p->all_colors_image, 135, 40);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
}
