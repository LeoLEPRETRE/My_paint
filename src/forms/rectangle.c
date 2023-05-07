/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** rectangle.c
*/
#include "paint.h"

void rectangle_in_notepad(paint_t *p)
{

    if (p->first_click_x >= 482 * p->scale_x
    && p->release_x >= 482 * p->scale_x
    && p->first_click_x <= 1410 * p->scale_x
    && p->release_x <= 1410 * p->scale_x) {
        if (p->first_click_y >= 278 * p->scale_y
        && p->release_y >= 278 * p->scale_y
        && p->first_click_y <= 791 * p->scale_y
        && p->release_y <= 791 * p->scale_y) {
            create_rectangle(p);
            sfTexture_updateFromImage(p->no_image_texture, p->no_image, 0, 0);
        }
    }
}

void create_rectangle(paint_t *p)
{
    if (p->first_click_x == p->release_x) return;
    if (p->first_click_y == p->release_y) return;
    if (p->first_click_x < p->release_x) {
        p->origin_x = p->first_click_x; p->end_x = p->release_x;
    }
    if (p->first_click_x > p->release_x) {
        p->origin_x = p->release_x; p->end_x = p->first_click_x;
    }
    if (p->first_click_y < p->release_y) {
        p->origin_y = p->first_click_y; p->end_y = p->release_y;
    }
    if (p->first_click_y > p->release_y) {
        p->origin_y = p->release_y; p->end_y = p->first_click_y;
    }
    p->origin_x = p->origin_x - (482 * p->scale_x);
    p->origin_y = p->origin_y - (278 * p->scale_y);
    p->end_x = p->end_x - (482 * p->scale_x);
    p->end_y = p->end_y - (278 * p->scale_y);
    draw_rectangle(p);
}

void draw_rectangle(paint_t *p)
{
    float image_x = sfImage_getSize(p->no_image).x;
    float image_y = sfImage_getSize(p->no_image).y;
    float paper_x = (1410 - 482) * p->scale_x;
    float paper_y = (791 - 278) * p->scale_y;
    float coeff_x = image_x / paper_x; float coeff_y = image_y / paper_y;
    p->origin_x = p->origin_x * coeff_x;
    p->origin_y = p->origin_y * coeff_y;
    p->end_x = p->end_x * coeff_x;
    p->end_y = p->end_y * coeff_y;
    do_rectangle(p);
}

void do_rectangle(paint_t *p)
{
    int height = sfImage_getSize(p->no_image).y;
    int x = p->origin_x; int y = p->origin_y;
    int a = p->end_x; int b = p->end_y;
    if (y + 1 < height) {
        for (int i = 0; p->origin_x + i < p->end_x; i++)
            sfImage_setPixel(p->no_image, x + i, y, p->color);
        for (int i = 0; p->origin_x + i < p->end_x; i++)
            sfImage_setPixel(p->no_image, x + i, y + 1, p->color);
        for (int i = 0; y + i < p->end_y; i++)
            sfImage_setPixel(p->no_image, x, y + i, p->color);
        for (int i = 0; p->end_x - i > x; i++)
            sfImage_setPixel(p->no_image, a - i, b, p->color);
        for (int i = 0; p->end_x - i > x; i++)
            sfImage_setPixel(p->no_image, a - i, b + 1, p->color);
        for (int i = 0; p->end_y - i > y; i++)
            sfImage_setPixel(p->no_image, a, b - i, p->color);
    }
}
