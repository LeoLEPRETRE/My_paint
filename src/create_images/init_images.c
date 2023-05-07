/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** init_images.c
*/
#include "paint.h"

/*
** Initialize the images
*/

void init_images(paint_t* p)
{
    sfVector2f pos_tab_colors = {1500, 250};
    sfVector2f scale_tabcol = {1.3, 1.3};
    p->all_colors_image = sfImage_createFromFile("assets/tab_colors.png");
    p->tab_col_texture = sfTexture_createFromImage(p->all_colors_image, NULL);
    p->tab_colors =
    getsprite_fromimage(p->tab_col_texture,
    pos_tab_colors, scale_tabcol);

    sfVector2f pos_rect = {482, 278}; sfVector2f size_rect = {928, 513};
    p->rectangle_draw = my_getrect(pos_rect, size_rect, sfWhite);
    p->no_image = sfImage_createFromFile("assets/white_image.jpg");
    p->no_image_texture =
    sfTexture_createFromImage(p->no_image, NULL);
    sfRectangleShape_setTexture(p->rectangle_draw, p->no_image_texture, false);
}
