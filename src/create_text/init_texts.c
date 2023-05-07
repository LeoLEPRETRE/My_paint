/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** init texts.c
*/
#include "paint.h"

void init_text_edit(paint_t *p)
{
    sfVector2f pen_text_pos = {100, 534}; int size_pen = 35;
    p->pen_text =
    my_gettext("Pencil", "assets/Baxoe.ttf", pen_text_pos, size_pen);
    sfVector2f er_text_pos = {100, 616}; int size_er = 35;
    p->er_text =
    my_gettext("Eraser", "assets/Baxoe.ttf", er_text_pos, size_er);
    sfVector2f sq_text_pos = {100, 698}; int size_sq = 35;
    p->sq_text =
    my_gettext("Square", "assets/Baxoe.ttf", sq_text_pos, size_sq);
    sfVector2f ci_text_pos = {100, 780}; int size_ci = 35;
    p->ci_text =
    my_gettext("Circle", "assets/Baxoe.ttf", ci_text_pos, size_ci);
    sfVector2f li_text_pos = {100, 862}; int size_li = 35;
    p->li_text =
    my_gettext("Line", "assets/Baxoe.ttf", li_text_pos, size_li);
    sfVector2f pi_text_pos = {100, 862}; int size_pi = 35;
    p->pi_text =
    my_gettext("Pipette", "assets/Baxoe.ttf", pi_text_pos, size_pi);
}

void init_text_file(paint_t *p)
{
    sfVector2f of_text_pos = {100, 372}; int size_of = 35;
    p->of_text =
    my_gettext("Open file", "assets/Baxoe.ttf", of_text_pos, size_of);
    sfVector2f nf_text_pos = {100, 454}; int size_nf = 35;
    p->nf_text =
    my_gettext("New file", "assets/Baxoe.ttf", nf_text_pos, size_nf);
    sfVector2f sf_text_pos = {100, 536}; int size_sf = 35;
    p->sf_text =
    my_gettext("Save file", "assets/Baxoe.ttf", sf_text_pos, size_sf);
    sfVector2f pe = {1650, 897}; int se = 75;
    p->ab_exit = my_gettext("EXIT", "assets/Baxoe.ttf", pe, se);
    sfVector2f os = {657, 465}; int so = 85;
    p->osf_text = my_gettext("Go on your terminal", "assets/Baxoe.ttf", os, so);
}

void init_text_help(paint_t *p)
{
    sfVector2f ab_text_pos = {100, 694}; int size_ab = 35;
    p->ab_text =
    my_gettext("About", "assets/Baxoe.ttf", ab_text_pos, size_ab);
    sfVector2f he_text_pos = {100, 776}; int size_he = 35;
    p->he_text =
    my_gettext("Help", "assets/Baxoe.ttf", he_text_pos, size_he);
    sfVector2f pos_help_back = {0, 0}; sfVector2f sc_hb = {1, 1};
    p->help_back = my_getsprite("assets/background.jpg", pos_help_back, sc_hb);
    sfVector2f pos_help_text = {860, 41}; int size_h = 105;
    p->text_he =
    my_gettext("HELP", "assets/Baxoe.ttf", pos_help_text, size_h);
    sfVector2f pe = {1650, 897}; int se = 75;
    p->he_exit = my_gettext("EXIT", "assets/Baxoe.ttf", pe, se);
}

void init_text_menu(paint_t *p)
{
    sfVector2f pos_file_text = {83, 270}; int file_size = 60;
    p->file_text =
    my_gettext("FILE", "assets/Baxoe.ttf", pos_file_text, file_size);
    sfVector2f pos_edit_text = {83, 430}; int edit_size = 60;
    p->edit_text =
    my_gettext("EDITION", "assets/Baxoe.ttf", pos_edit_text, edit_size);
    sfVector2f pos_help_text = {83, 590}; int help_size = 60;
    p->help_text =
    my_gettext("HELP", "assets/Baxoe.ttf", pos_help_text, help_size);
    sfVector2f pl2 = {743, 540}; int sl2 = 40;
    p->log2 =
    my_gettext("henri.gey-bechalier@epitech.eu", "assets/Baxoe.ttf", pl2, sl2);
    sfVector2f pos_ab_text = {810, 41}; int size_ab = 105;
    p->about_text =
    my_gettext("ABOUT", "assets/Baxoe.ttf", pos_ab_text, size_ab);
    sfVector2f pos_l1 = {743, 390}; int size_l1 = 40;
    p->log1 =
    my_gettext("leo.lepretre@epitech.eu", "assets/Baxoe.ttf", pos_l1, size_l1);
}
