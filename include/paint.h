/*
** EPITECH PROJECT, 2023
** paint
** File description:
** paint_h
*/
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System/Clock.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/types.h>
#include <unistd.h>
#include <math.h>
#include "my.h"
#include "printf.h"

#ifndef paint_h
    #define paint_h

typedef struct paint_s {
    sfSprite *sprite_background;
    sfSprite *sprite_notepad;
    sfSprite *sprite_tools;
    sfSprite *about_back;
    sfSprite *osf_back;
    sfSprite *help_back;
    sfSprite *tab_colors;
    sfSprite *plus;
    sfSprite *less;
    sfSprite *plus_w;
    sfSprite *plus_max;
    sfSprite *less_w;
    sfSprite *less_max;
    sfRectangleShape *rectangle_draw;
    sfRectangleShape *file_rect;
    sfRectangleShape *edition_rect;
    sfRectangleShape *help_rect;
    sfRectangleShape *of_rect;
    sfRectangleShape *nf_rect;
    sfRectangleShape *sf_rect;
    sfRectangleShape *pen_rect;
    sfRectangleShape *er_rect;
    sfRectangleShape *sq_rect;
    sfRectangleShape *ci_rect;
    sfRectangleShape *li_rect;
    sfRectangleShape *pi_rect;
    sfRectangleShape *about_rect;
    sfRectangleShape *he_rect;
    sfRectangleShape *current_color;
    sfRectangleShape *rect1_bck;
    sfRectangleShape *rect2_bck;
    sfRectangleShape *rect_option1;
    sfCircleShape *ci_option1;
    sfRectangleShape *rect_option2;
    sfCircleShape *ci_option2;
    sfText *file_text;
    sfText *edit_text;
    sfText *help_text;
    sfText *of_text;
    sfText *nf_text;
    sfText *sf_text;
    sfText *pen_text;
    sfText *er_text;
    sfText *sq_text;
    sfText *ci_text;
    sfText *li_text;
    sfText *pi_text;
    sfText *ab_text;
    sfText *about_text;
    sfText *log1;
    sfText *log2;
    sfText *he_text;
    sfText *ab_exit;
    sfText *he_exit;
    sfText *text_he;
    sfText *hp;
    sfText *osf_text;
    short test;
    unsigned int window_x;
    unsigned int window_y;
    float window_x1;
    float window_y1;
    bool isfileopen;
    bool ishelpopen;
    bool iseditopen;
    bool ispenclick;
    bool iserclick;
    bool issqclick;
    bool isciclick;
    bool isliclick;
    bool ispiclick;
    bool isabclick;
    bool isheclick;
    int mouse_pos_x;
    int mouse_pos_y;
    sfVector2f pos_file;
    sfVector2f pos_edit;
    sfVector2f pos_help;
    sfVector2f size_file;
    sfVector2f size_edit;
    sfVector2f size_help;
    sfVector2i mouse;
    sfColor color;
    sfImage *all_colors_image;
    sfImage *no_image;
    sfTexture *tab_col_texture;
    sfTexture *no_image_texture;
    int thickness;
    // For drawing
    bool penIsCircle;
    float setPixel_x;
    float setPixel_y;
    int i;
    int j;
    //
    bool erIsCircle;
    float first_click_x;
    float first_click_y;
    float release_x;
    float release_y;
    int origin_x;
    int origin_y;
    int end_x;
    int end_y;
    //
    double scale_x;
    double scale_y;
    char *input_str;
    char *version;
    char *file_name;
    int error;
    bool isgoodversion;
    bool isgoodname;
    bool isvalidfile;
    bool issfClick;
    bool isofClick;
} paint_t;

// Draw the sprites
void draw_sprites(sfRenderWindow *window, paint_t *p);

// Check the events occuring
void analyse_events(sfEvent event, paint_t *p, sfRenderWindow *window);

// Initialize menu
void init_rect_menu(paint_t *p);
void init_text_menu(paint_t *p);

// Initialize sprites
void setup_sprites(paint_t *p);

// Initialize rectangles
void init_rect(paint_t *p);
void init_rect_2(paint_t *p);
void init_rect_3(paint_t *p);

// Initialize texts
void init_text_edit(paint_t *p);
void init_text_file(paint_t *p);
void init_text_help(paint_t *p);
void help_phrase1(paint_t *p);

// Initialize images
void init_images(paint_t* p);

// Close the window
int close_one(sfRenderWindow *window, sfEvent event);

// Return the sprite wanted with given parameters
sfSprite *my_getsprite(char *filepath, sfVector2f position, sfVector2f scale);

// Return the rectangle wanted with given parameters
sfRectangleShape *my_getrect(sfVector2f pos, sfVector2f size, sfColor col);

// Return the text wanted with given parameters
sfText *my_gettext(char *phrase, char *police, sfVector2f pos, int size);

// Return a sprite with the image given in parameters
sfSprite *getsprite_fromimage
(sfTexture *texture, sfVector2f pos, sfVector2f scale);

void file_contour(paint_t *p, sfRenderWindow *window);
void edit_contour(paint_t *p, sfRenderWindow *window);
void help_contour(paint_t *p, sfRenderWindow *window);
void manage_mouse_click(sfMouseButtonEvent event, paint_t *p,
                        sfRenderWindow *window);
void mf_contour(paint_t *p, sfRenderWindow *window);
void mf_ed_contour(paint_t *p, sfRenderWindow *window);
void ed_contour(paint_t *p, sfRenderWindow *window);
void ed_contour2(paint_t *p, sfRenderWindow *window);
void ed_he_contour(paint_t *p, sfRenderWindow *window);
void he_contour(paint_t *p, sfRenderWindow *window);
void plus_contour(paint_t *p, sfRenderWindow *window);
void less_contour(paint_t *p, sfRenderWindow *window);
void fill_tools(paint_t *p);
void fill_tools2(paint_t *p);
void check_edit(sfMouseButtonEvent event, paint_t *p);
void check_edit2(sfMouseButtonEvent event, paint_t *p);
void check_edit3(sfMouseButtonEvent event, paint_t *p);
void check_help(sfMouseButtonEvent event, paint_t *p);
void fill_about_help(paint_t *p);
void exit_color(paint_t *p, sfRenderWindow *window);
void set_color2(paint_t *p);
void rect_and_circle_contour1(paint_t *p, sfRenderWindow *window);
void rect_and_circle_contour2(paint_t *p, sfRenderWindow *window);

void init_all(paint_t *p);
void check_opened_menu(sfRenderWindow *window, paint_t *p);
void file_isopen(sfRenderWindow *window, paint_t *p);
void edit_isopen(sfRenderWindow *window, paint_t *p);
void help_isopen(sfRenderWindow *window, paint_t *p);

void check_exit(sfMouseButtonEvent event, paint_t *p);
void fill_file_rect(sfMouseButtonEvent event, paint_t *p);
void fill_edit_rect(sfMouseButtonEvent event, paint_t *p);
void fill_help_rect(sfMouseButtonEvent event, paint_t *p);
void check_circle(sfMouseButtonEvent event, paint_t *p);

// Colors
void update_colors(sfEvent event, paint_t *p);
void check_line_color(sfEvent event, paint_t *p);
void check_first_line_color(sfEvent event, paint_t *p);
void check_second_line_color(sfEvent event, paint_t *p);
void check_third_line_color(sfEvent event, paint_t *p);
void check_fourth_line_color(sfEvent event, paint_t *p);
void check_fifth_line_color(sfEvent event, paint_t *p);
void check_sixth_line_color(sfEvent event, paint_t *p);

// Draw pixels
void draw_pixels(sfRenderWindow *window, paint_t *p);
void painting(sfRenderWindow *window, paint_t *p);
void draw_with_tickness(paint_t *p, float x, float y);
void draw_rcopt(sfRenderWindow *window, paint_t *p);

void draw_circle_pixels(paint_t *p, int radius, float x, float y);
void fill_circle_pixels(paint_t *p, int index, int radius);
void add_first_part_color(paint_t *p, int index, int radius, sfColor color);
void add_second_part_color(paint_t *p, int index, int radius, sfColor color);
void draw_rectangle_pixels(paint_t *p, float x, float y);
void fill_rectangle_pixels(paint_t *p, float x, float y, sfColor color);
void erase_with_tickness(paint_t *p, float x, float y);
void erase_pixels(sfRenderWindow *window, paint_t *p);

void circle_in_notepad(paint_t *p);
void create_circle(paint_t *p);
void draw_circle(paint_t *p, int radius);
void do_circle(paint_t *p, int i, int radius);

void rectangle_in_notepad(paint_t *p);
void create_rectangle(paint_t *p);
void draw_rectangle(paint_t *p);
void do_rectangle(paint_t *p);

void event_is_buttonreleased(sfEvent event, paint_t *p, sfRenderWindow *window);

void pipette_in_notepad(paint_t *p);
void take_color(paint_t *p);
void all_contour(paint_t *p, sfRenderWindow *window);

// File menu actions
void open_file(sfMouseButtonEvent event, paint_t *p);
void new_file(sfMouseButtonEvent event, paint_t *p, sfRenderWindow *window);
void save_file(sfMouseButtonEvent event, paint_t *p);
int check_getstr(paint_t *p);
int def_version(paint_t *p);
int def_name(paint_t *p);
int check_valid(paint_t *p);
int gestion(paint_t *p);

// Window boucle
void start(paint_t *p, sfRenderWindow *window);

//Check assets
int asset_check(void);
int asset_check1(void);

#endif /* !paint_h */
