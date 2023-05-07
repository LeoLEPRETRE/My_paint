/*
** EPITECH PROJECT, 2023
** contour2.c
** File description:
** contour2
*/
#include "paint.h"

void mf_contour(paint_t *p, sfRenderWindow *window)
{
    int x = sfMouse_getPositionRenderWindow(window).x;
    int y = sfMouse_getPositionRenderWindow(window).y;
    if (x >= (87 * p->scale_x) && x <= (387 * p->scale_x)) {
        if (y >= (374 * p->scale_y) && y <= (422 * p->scale_y)) {
            sfRectangleShape_setOutlineColor(p->of_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->of_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->of_rect, sfBlack);
    }
    if (x >= (87 * p->scale_x) && x <= (387 * p->scale_x)) {
        if (y >= (457 * p->scale_y) && y <= (504 * p->scale_y)) {
            sfRectangleShape_setOutlineColor(p->nf_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->nf_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->nf_rect, sfBlack);
    }
}

void mf_ed_contour(paint_t *p, sfRenderWindow *window)
{
    int x = sfMouse_getPositionRenderWindow(window).x;
    int y = sfMouse_getPositionRenderWindow(window).y;
    if (x >= (87 * p->scale_x) && x <= (387 * p->scale_x)) {
        if (y >= (538 * p->scale_y) && y <= (585 * p->scale_y)) {
            sfRectangleShape_setOutlineColor(p->sf_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->sf_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->sf_rect, sfBlack);
    }
    if (x >= (87 * p->scale_x) && x <= (387 * p->scale_x)) {
        if (y >= (533 * p->scale_y) && y <= (581 * p->scale_y)) {
            sfRectangleShape_setOutlineColor(p->pen_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->pen_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->pen_rect, sfBlack);
    }
}

void ed_contour(paint_t *p, sfRenderWindow *window)
{
    int x = sfMouse_getPositionRenderWindow(window).x;
    int y = sfMouse_getPositionRenderWindow(window).y;
    if (x >= (87 * p->scale_x) && x <= (387 * p->scale_x)) {
        if (y >= (615 * p->scale_y) && y <= (663 * p->scale_y)) {
            sfRectangleShape_setOutlineColor(p->er_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->er_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->er_rect, sfBlack);
    }
    if (x >= (87 * p->scale_x) && x <= (387 * p->scale_x)) {
        if (y >= (698 * p->scale_y) && y <= (745 * p->scale_y)) {
            sfRectangleShape_setOutlineColor(p->sq_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->sq_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->sq_rect, sfBlack);
    }
}

void ed_contour2(paint_t *p, sfRenderWindow *window)
{
    int x = sfMouse_getPositionRenderWindow(window).x;
    int y = sfMouse_getPositionRenderWindow(window).y;
    if (x >= (87 * p->scale_x) && x <= (387 * p->scale_x)) {
        if (y >= (779 * p->scale_y) && y <= (827 * p->scale_y)) {
            sfRectangleShape_setOutlineColor(p->ci_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->ci_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->ci_rect, sfBlack);
    }
}

void ed_he_contour(paint_t *p, sfRenderWindow *window)
{
    int x = sfMouse_getPositionRenderWindow(window).x;
    int y = sfMouse_getPositionRenderWindow(window).y;
    if (x >= (87 * p->scale_x) && x <= (387 * p->scale_x)) {
        if (y >= (861 * p->scale_y) && y <= (909 * p->scale_y)) {
            sfRectangleShape_setOutlineColor(p->pi_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->pi_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->pi_rect, sfBlack);
    }
    if (x >= (87 * p->scale_x) && x <= (387 * p->scale_x)) {
        if (y >= (694 * p->scale_y) && y <= (742 * p->scale_y)) {
            sfRectangleShape_setOutlineColor(p->about_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->about_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->about_rect, sfBlack);
    }
}
