/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** erase.c
*/
#include "paint.h"

void erase_pixels(sfRenderWindow *window, paint_t *p)
{
    p->mouse_pos_x = sfMouse_getPositionRenderWindow(window).x;
    p->mouse_pos_y = sfMouse_getPositionRenderWindow(window).y;
    float image_x = sfImage_getSize(p->no_image).x;
    float image_y = sfImage_getSize(p->no_image).y;
    float paper_x = (1410 - 482) * p->scale_x;
    float paper_y = (791 - 278) * p->scale_y;
    float coeff_x = (image_x / paper_x); float coeff_y = (image_y / paper_y);
    if (p->mouse_pos_x >= 482 * p->scale_x
    && p->mouse_pos_x <= 1410 * p->scale_x)
        if (p->mouse_pos_y >= 278 * p->scale_y
        && p->mouse_pos_y <= 791 * p->scale_y) {
        float pos_x = p->mouse_pos_x - (482 * p->scale_x);
        float pos_y = p->mouse_pos_y - (278 * p->scale_y);
            int x = pos_x * coeff_x; int y = pos_y * coeff_y;
            erase_with_tickness(p, x, y);
            sfTexture_updateFromImage(p->no_image_texture, p->no_image, 0, 0);
            sfRenderWindow_drawRectangleShape(window, p->rectangle_draw, NULL);
            sfRectangleShape_setTexture(p->rectangle_draw, p->no_image_texture,
            sfFalse);
        }
}

void erase_with_tickness(paint_t *p, float x, float y)
{
    int width = sfImage_getSize(p->no_image).x;
    int height = sfImage_getSize(p->no_image).y;
    if (x < 0)
        x = 1;
    if (y < 0)
        y = 1;
    if (x >= width)
        x = width - 1;
    if (y >= height)
        y = height - 1;
    if (p->erIsCircle == true)
        draw_circle_pixels(p, p->thickness, x, y);
    else
        draw_rectangle_pixels(p, x, y);
}
