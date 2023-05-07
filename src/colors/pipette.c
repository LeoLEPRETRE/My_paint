/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** pipette.c
*/
#include "paint.h"

void pipette_in_notepad(paint_t *p)
{
    if (p->first_click_x >= 482 * p->scale_x
    && p->first_click_x <= 1410 * p->scale_x) {
        if (p->first_click_y >= 278  * p->scale_y
        && p->first_click_y * p->scale_y <= 791) {
            take_color(p);
            sfTexture_updateFromImage(p->no_image_texture, p->no_image, 0, 0);
        }
    }
}

void take_color(paint_t *p)
{
    p->first_click_x = p->first_click_x - (482 * p->scale_x);
    p->first_click_y = p->first_click_y - (278 * p->scale_y);
    float image_x = sfImage_getSize(p->no_image).x;
    float image_y = sfImage_getSize(p->no_image).y;
    float paper_x = (1410 - 482) * p->scale_x;
    float paper_y = (791 - 278) * p->scale_y;
    float coeff_x = image_x / paper_x; float coeff_y = image_y / paper_y;
    p->first_click_x = p->first_click_x * coeff_x;
    p->first_click_y = p->first_click_y * coeff_y;
    if (p->first_click_y + 1 < image_y)
    p->color =
    sfImage_getPixel(p->no_image, p->first_click_x, p->first_click_y);
    sfRectangleShape_setFillColor(p->current_color, p->color);
}
