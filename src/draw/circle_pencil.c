/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** circle_pencil.c
*/
#include "paint.h"

void draw_circle_pixels(paint_t *p, int radius, float x, float y)
{
    int index = 0;
    int d = 1 - radius;
    p->setPixel_x = x;
    p->setPixel_y = y;

    while (index <= radius) {
        fill_circle_pixels(p, index, radius);
        if (d < 0)
            d = d + 2 * index + 3;
        else {
            d = d + 2 * (index - radius) + 5;
            radius--;
        }
        index++;
    }
}

void fill_circle_pixels(paint_t *p, int index, int radius)
{
    sfColor color = p->color;
    if (p->iserclick == true)
        color = sfImage_getPixel(p->all_colors_image, 40, 90);
for (p->i = -index + p->setPixel_x; p->i <= index + p->setPixel_x; p->i++) {
for (p->j = -radius + p->setPixel_y; p->j <= radius + p->setPixel_y; p->j++) {
            add_first_part_color(p, index, radius, color);
        }
    }
for (p->i = -radius + p->setPixel_x; p->i <= radius + p->setPixel_x; p->i++) {
for (p->j = -index + p->setPixel_y; p->j <= index + p->setPixel_y; p->j++) {
            add_second_part_color(p, index, radius, color);
        }
    }
}

void add_first_part_color(paint_t *p, int index, int radius, sfColor color)
{
    int width = sfImage_getSize(p->no_image).x;
    int height = sfImage_getSize(p->no_image).y;
    if (index + p->setPixel_x < width && -index + p->setPixel_x >= 0
            && radius+ p->setPixel_y < height && -radius+ p->setPixel_y >= 0)
                sfImage_setPixel(p->no_image, p->i, p->j, color);
}

void add_second_part_color(paint_t *p, int index, int radius, sfColor color)
{
    int width = sfImage_getSize(p->no_image).x;
    int height = sfImage_getSize(p->no_image).y;
    if (radius + p->setPixel_x < width && -radius + p->setPixel_x >= 0
            && index + p->setPixel_y < height && -index + p->setPixel_y >= 0)
                sfImage_setPixel(p->no_image, p->i, p->j, color);
}

/*
// TO CREATE A CIRCLE NOT FILLED WITH PIXELS.
// Use this function for the circle tool.
if (index + x < width && radius + y < height) {
            sfImage_setPixel(p->no_image, index + x, radius + y, sfBlack);
        }
        if (index + x < width && y - radius > 0)
        sfImage_setPixel(p->no_image, index + x, y - radius, sfBlack);
        if (radius + x < width && index + y < height)
        sfImage_setPixel(p->no_image, radius + x, index + y, sfBlack);
        if (radius + x < width && y - index > 0)
        sfImage_setPixel(p->no_image, radius + x, y - index, sfBlack);
        if (x - index > 0 && radius + y < height)
        sfImage_setPixel(p->no_image, x - index, radius + y, sfBlack);
        if (x - index > 0 && y - radius > 0)
        sfImage_setPixel(p->no_image, x - index, y - radius, sfBlack);
        if (x - radius > 0 && index + y < height)
        sfImage_setPixel(p->no_image, x - radius, index + y, sfBlack);
        if (x - radius > 0 && y - index > 0)
        sfImage_setPixel(p->no_image, x - radius, y - index, sfBlack);
*/
