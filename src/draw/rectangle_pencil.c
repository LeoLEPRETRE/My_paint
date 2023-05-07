/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** rectangle_pencil.c
*/
#include "paint.h"

// SQUARE PENCIL
void draw_rectangle_pixels(paint_t *p, float x, float y)
{
    sfColor color = p->color;
    if (p->iserclick == true)
        color = sfImage_getPixel(p->all_colors_image, 40, 90);
    for (p->i = 0; p->i < p->thickness / 2; p->i++) {
        for (p->j = 0; p->j < p->thickness; p->j++) {
            fill_rectangle_pixels(p, x, y, color);
        }
    }
}

void fill_rectangle_pixels(paint_t *p, float x, float y, sfColor color)
{
    int width = sfImage_getSize(p->no_image).x;
    int height = sfImage_getSize(p->no_image).y;
        if (x + p->i < width && y + p->j < height) {
            sfImage_setPixel(p->no_image, x + p->i, y + p->j, color);
        }
        if (x - p->i > 0 && y + p->j < height) {
            sfImage_setPixel(p->no_image, x - p->i, y + p->j, color);
        }
        if (x + p->i < width && y - p->j > 0) {
            sfImage_setPixel(p->no_image, x + p->i, y - p->j, color);
        }
        if (x - p->i > 0 && y - p->j > 0) {
            sfImage_setPixel(p->no_image, x - p->i, y - p->j, color);
        }
}
