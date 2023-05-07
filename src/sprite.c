/*
** EPITECH PROJECT, 2022
** CSFML
** File description:
** sprite.c
*/
#include "paint.h"

void draw_sprites(sfRenderWindow *window, paint_t *p)
{
    sfRenderWindow_drawSprite(window, p->sprite_background, NULL);
    sfRenderWindow_drawSprite(window, p->sprite_notepad, NULL);
    sfRenderWindow_drawRectangleShape(window, p->rectangle_draw, NULL);
    sfRenderWindow_drawRectangleShape(window, p->file_rect, NULL);
    sfRenderWindow_drawText(window, p->file_text, NULL);
    sfRenderWindow_drawSprite(window, p->tab_colors, NULL);
    sfRenderWindow_drawRectangleShape(window, p->current_color, NULL);
    plus_contour(p, window); less_contour(p, window);
    if (p->isfileopen == false) {
        sfRenderWindow_drawRectangleShape(window, p->edition_rect, NULL);
        sfRenderWindow_drawText(window, p->edit_text, NULL);
    }
    if (p->isfileopen == false && p->iseditopen == false) {
        sfRenderWindow_drawRectangleShape(window, p->help_rect, NULL);
        sfRenderWindow_drawText(window, p->help_text, NULL);
    }
    check_opened_menu(window, p);
}

void check_opened_menu(sfRenderWindow *window, paint_t *p)
{
    if (p->isfileopen == true)
        file_isopen(window, p);
    if (p->iseditopen == true)
        edit_isopen(window, p);
    if (p->ishelpopen == true)
        help_isopen(window, p);
}

void file_isopen(sfRenderWindow *window, paint_t *p)
{
    if (p->isofClick == true) {
        sfRectangleShape_setFillColor(p->of_rect, sfWhite);
        sfRenderWindow_drawSprite(window, p->osf_back, NULL);
        sfRenderWindow_drawText(window, p->osf_text, NULL);
    } else
        sfRectangleShape_setFillColor(p->of_rect, sfTransparent);
    sfRenderWindow_drawRectangleShape(window, p->of_rect, NULL);
    sfRenderWindow_drawRectangleShape(window, p->nf_rect, NULL);
    if (p->issfClick == true) {
        sfRectangleShape_setFillColor(p->sf_rect, sfWhite);
        sfRenderWindow_drawSprite(window, p->osf_back, NULL);
        sfRenderWindow_drawText(window, p->osf_text, NULL);
    } else
        sfRectangleShape_setFillColor(p->sf_rect, sfTransparent);
    sfRenderWindow_drawRectangleShape(window, p->sf_rect, NULL);
    sfRenderWindow_drawText(window, p->of_text, NULL);
    sfRenderWindow_drawText(window, p->nf_text, NULL);
    sfRenderWindow_drawText(window, p->sf_text, NULL);
}

void edit_isopen(sfRenderWindow *window, paint_t *p)
{
    sfRenderWindow_drawRectangleShape(window, p->pen_rect, NULL);
    sfRenderWindow_drawRectangleShape(window, p->er_rect, NULL);
    sfRenderWindow_drawRectangleShape(window, p->sq_rect, NULL);
    sfRenderWindow_drawRectangleShape(window, p->ci_rect, NULL);
    sfRenderWindow_drawRectangleShape(window, p->pi_rect, NULL);
    sfRenderWindow_drawRectangleShape(window, p->rect1_bck, NULL);
    sfRenderWindow_drawRectangleShape(window, p->rect2_bck, NULL);
    draw_rcopt(window, p);
    sfRenderWindow_drawText(window, p->pen_text, NULL);
    sfRenderWindow_drawText(window, p->er_text, NULL);
    sfRenderWindow_drawText(window, p->sq_text, NULL);
    sfRenderWindow_drawText(window, p->ci_text, NULL);
    sfRenderWindow_drawText(window, p->pi_text, NULL);
}

void help_isopen(sfRenderWindow *window, paint_t *p)
{
    sfRenderWindow_drawRectangleShape(window, p->about_rect, NULL);
    sfRenderWindow_drawRectangleShape(window, p->he_rect, NULL);
    sfRenderWindow_drawText(window, p->ab_text, NULL);
    sfRenderWindow_drawText(window, p->he_text, NULL);
    if (p->isabclick == true) {
        sfRenderWindow_drawSprite(window, p->about_back, NULL);
        sfRenderWindow_drawText(window, p->about_text, NULL);
        sfRenderWindow_drawText(window, p->log1, NULL);
        sfRenderWindow_drawText(window, p->log2, NULL);
        sfRenderWindow_drawText(window, p->ab_exit, NULL);
    }
    if (p->isheclick == true) {
        sfRenderWindow_drawSprite(window, p->help_back, NULL);
        sfRenderWindow_drawText(window, p->text_he, NULL);
        sfRenderWindow_drawText(window, p->ab_exit, NULL);
        sfRenderWindow_drawText(window, p->hp, NULL);
    }
}
