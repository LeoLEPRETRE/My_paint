/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** circle.c
*/
#include "paint.h"

void circle_in_notepad(paint_t *p)
{
    if (p->first_click_x >= 482 * p->scale_x
    && p->release_x >= 482 * p->scale_x
    && p->first_click_x <= 1410 * p->scale_x
    && p->release_x <= 1410 * p->scale_x) {
        if (p->first_click_y >= 278 * p->scale_y
        && p->release_y >= 278 * p->scale_y
        && p->first_click_y <= 791 * p->scale_y
        && p->release_y <= 791 * p->scale_y) {
            create_circle(p);
            sfTexture_updateFromImage(p->no_image_texture, p->no_image, 0, 0);
        }
    }
}

void create_circle(paint_t *p)
{
    int radius;
    if (p->first_click_x == p->release_x)
        return;
    if (p->first_click_x < p->release_x) {
    p->origin_x = p->first_click_x + ((p->release_x - p->first_click_x) / 2);
        radius = (p->release_x - p->first_click_x) / 2;
    }
    if (p->first_click_x > p->release_x) {
    p->origin_x = p->release_x + ((p->first_click_x - p->release_x) / 2);
        radius = (p->first_click_x - p->release_x) / 2;
    }
    if (p->first_click_y == p->release_y)
        p->origin_y = p->first_click_y + radius;
    if (p->first_click_y < p->release_y)
    p->origin_y = p->first_click_y + ((p->release_y - p->first_click_y) / 2);
    if (p->first_click_y > p->release_y)
        p->origin_y = p->release_y + ((p->first_click_y - p->release_y) / 2);
    p->origin_x = p->origin_x - (482 * p->scale_x);
    p->origin_y = p->origin_y - (278 * p->scale_y);
    draw_circle(p, radius);
}

void draw_circle(paint_t *p, int radius)
{
    float image_x = sfImage_getSize(p->no_image).x;
    float image_y = sfImage_getSize(p->no_image).y;
    float paper_x = (1410 - 482) * p->scale_x;
    float paper_y = (791 - 278) * p->scale_y;
    float coeff_x = image_x / paper_x; float coeff_y = image_y / paper_y;
    p->origin_x = p->origin_x * coeff_x;
    p->origin_y = p->origin_y * coeff_y;
    int index = 0; int d = 1 - radius;
    p->setPixel_x = p->origin_x; p->setPixel_y = p->origin_y;

    while (index <= radius) {
        do_circle(p, index, radius);
        if (d < 0)
            d = d + 2 * index + 3;
        else {
            d = d + 2 * (index - radius) + 5;
            radius--;
        }
        index++;
    }
}

void do_circle(paint_t *p, int i, int radius)
{
    int width = sfImage_getSize(p->no_image).x;
    int height = sfImage_getSize(p->no_image).y;
        if (i + p->origin_x < width && radius + p->origin_y < height)
sfImage_setPixel(p->no_image, i + p->origin_x, radius + p->origin_y, p->color);
        if (i + p->origin_x < width && p->origin_y - radius > 0)
sfImage_setPixel(p->no_image, i + p->origin_x, p->origin_y - radius, p->color);
        if (radius + p->origin_x < width && i + p->origin_y < height)
sfImage_setPixel(p->no_image, radius + p->origin_x, i + p->origin_y, p->color);
        if (radius + p->origin_x < width && p->origin_y - i > 0)
sfImage_setPixel(p->no_image, radius + p->origin_x, p->origin_y - i, p->color);
        if (p->origin_x - i > 0 && radius + p->origin_y < height)
sfImage_setPixel(p->no_image, p->origin_x - i, radius + p->origin_y, p->color);
        if (p->origin_x - i > 0 && p->origin_y - radius > 0)
sfImage_setPixel(p->no_image, p->origin_x - i, p->origin_y - radius, p->color);
        if (p->origin_x - radius > 0 && i + p->origin_y < height)
sfImage_setPixel(p->no_image, p->origin_x - radius, i + p->origin_y, p->color);
        if (p->origin_x - radius > 0 && p->origin_y - i > 0)
sfImage_setPixel(p->no_image, p->origin_x - radius, p->origin_y - i, p->color);
}
