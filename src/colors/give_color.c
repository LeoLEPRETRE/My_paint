/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** give_color.c
*/
#include "paint.h"

void check_second_line_color(sfEvent event, paint_t *p)
{
    if (event.mouseButton.x >= (1534 * p->scale_x) &&
        event.mouseButton.x <= (1577 * p->scale_x)) {
        p->color = sfImage_getPixel(p->all_colors_image, 40, 90);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
    if (event.mouseButton.x >= (1593 * p->scale_x) &&
        event.mouseButton.x <= (1636 * p->scale_x)) {
        p->color = sfImage_getPixel(p->all_colors_image, 90, 90);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
    if (event.mouseButton.x >= (1652 * p->scale_x) &&
        event.mouseButton.x <= (1695 * p->scale_x)) {
        p->color = sfImage_getPixel(p->all_colors_image, 135, 90);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
}

void check_third_line_color(sfEvent event, paint_t *p)
{
    if (event.mouseButton.x >= (1534 * p->scale_x) &&
        event.mouseButton.x <= (1577 * p->scale_x)) {
        p->color = sfImage_getPixel(p->all_colors_image, 40, 140);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
    if (event.mouseButton.x >= (1593 * p->scale_x) &&
        event.mouseButton.x <= (1636 * p->scale_x)) {
        p->color = sfImage_getPixel(p->all_colors_image, 90, 140);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
    if (event.mouseButton.x >= (1652 * p->scale_x) &&
        event.mouseButton.x <= (1695 * p->scale_x)) {
        p->color = sfImage_getPixel(p->all_colors_image, 135, 140);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
}

void check_fourth_line_color(sfEvent event, paint_t *p)
{
    if (event.mouseButton.x >= (1534 * p->scale_x) &&
        event.mouseButton.x <= (1577 * p->scale_x)) {
        p->color = sfImage_getPixel(p->all_colors_image, 40, 190);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
    if (event.mouseButton.x >= (1593 * p->scale_x) &&
        event.mouseButton.x <= (1636 * p->scale_x)) {
        p->color = sfImage_getPixel(p->all_colors_image, 90, 190);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
    if (event.mouseButton.x >= (1652 * p->scale_x) &&
        event.mouseButton.x <= (1695 * p->scale_x)) {
        p->color = sfImage_getPixel(p->all_colors_image, 135, 190);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
}

void check_fifth_line_color(sfEvent event, paint_t *p)
{
    if (event.mouseButton.x >= (1534 * p->scale_x) &&
        event.mouseButton.x <= (1577 * p->scale_x)) {
        p->color = sfImage_getPixel(p->all_colors_image, 40, 240);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
    if (event.mouseButton.x >= (1593 * p->scale_x) &&
        event.mouseButton.x <= (1636 * p->scale_x)) {
        p->color = sfImage_getPixel(p->all_colors_image, 90, 240);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
    if (event.mouseButton.x >= (1652 * p->scale_x) &&
        event.mouseButton.x <= (1695 * p->scale_x)) {
        p->color = sfImage_getPixel(p->all_colors_image, 135, 240);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
}

void check_sixth_line_color(sfEvent event, paint_t *p)
{
    if (event.mouseButton.x >= (1534 * p->scale_x) &&
        event.mouseButton.x <= (1577 * p->scale_x)) {
        p->color = sfImage_getPixel(p->all_colors_image, 40, 290);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
    if (event.mouseButton.x >= (1593 * p->scale_x) &&
        event.mouseButton.x <= (1636 * p->scale_x)) {
        p->color = sfImage_getPixel(p->all_colors_image, 90, 290);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
    if (event.mouseButton.x >= (1652 * p->scale_x) &&
        event.mouseButton.x <= (1695 * p->scale_x)) {
        p->color = sfImage_getPixel(p->all_colors_image, 135, 290);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
}
