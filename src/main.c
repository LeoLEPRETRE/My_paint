/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** main.c
*/
#include "paint.h"

void def_scale(paint_t *p)
{
    p->scale_x = p->window_x / p->window_x1;
    p->scale_y = p->window_y / p->window_y1;
}

void init_all(paint_t *p)
{
    init_text_menu(p); init_rect_menu(p); init_images(p);
    init_text_file(p); init_text_edit(p); init_text_help(p);
    init_rect(p); init_rect_2(p);
    init_rect_3(p);
    help_phrase1(p);
    p->color = sfImage_getPixel(p->all_colors_image, 40, 40);
    p->thickness = 15;
    p->penIsCircle = true;
    p->scale_x = 0.00;
    p->scale_y = 0.00;
    p->isgoodversion = false; p->isgoodname = false; p->isvalidfile = false;
    p->ispenclick = false; p->iserclick = false; p->issqclick = false;
    p->isciclick = false; p->ispiclick = false; p->isliclick = false;
    p->issfClick = false; p->isofClick = false;
}

void start(paint_t *p, sfRenderWindow *window)
{
    sfEvent event;
    setup_sprites(p); init_all(p);
    sfRenderWindow_setFramerateLimit(window, 144);
    p->window_x1 = sfRenderWindow_getSize(window).x;
    p->window_y1 = sfRenderWindow_getSize(window).y;
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        p->window_x = sfRenderWindow_getSize(window).x;
        p->window_y = sfRenderWindow_getSize(window).y;
        def_scale(p);
        draw_sprites(window, p);
        painting(window, p);
        sfRenderWindow_display(window);
        if (gestion(p) == 84)
            return;
        while (sfRenderWindow_pollEvent(window, &event) &&
        (p->test = close_one(window, event)) == 0) {
            analyse_events(event, p, window);
        }
    }
}

int close_one(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(window);
        return 2;
    }
    return 0;
}

int main(int ac, char **av)
{
    (void) av;
    if (asset_check() == 24 || asset_check1() == 24)
        return 84;
    paint_t *paint = malloc(sizeof(paint_t));
        if (paint == NULL) {
            my_eprintf("malloc failed\n");
            return 84;
        }
    if (ac != 1) {
        my_eprintf("usage: ./paint\n");
        return 84;
    }
    sfRenderWindow *window;
    sfVideoMode mode = {1920, 1080, 64};
    window = sfRenderWindow_create(mode, "my_paint", sfResize | sfClose, NULL);
    start(paint, window);
    return 0;
}
