/*
** EPITECH PROJECT, 2022
** CSFML
** File description:
** utils.c
*/
#include "paint.h"

sfSprite *my_getsprite(char *filepath, sfVector2f pos, sfVector2f scale)
{
    sfTexture *texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfFalse);
    return sprite;
}

sfRectangleShape *my_getrect(sfVector2f pos, sfVector2f size, sfColor col)
{
    sfRectangleShape *rectangle = sfRectangleShape_create();
    sfRectangleShape_setSize(rectangle, size);
    sfRectangleShape_setPosition(rectangle, pos);
    sfRectangleShape_setFillColor(rectangle, col);
    sfRectangleShape_setOutlineThickness(rectangle, 3);
    sfRectangleShape_setOutlineColor(rectangle, sfBlack);
    return rectangle;
}

sfText *my_gettext(char *phrase, char *police, sfVector2f pos, int size)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile(police);
    sfText_setPosition(text, pos);
    sfText_setString(text, phrase);
    sfText_setFont(text, font);
    sfText_setColor(text, sfBlack);
    sfText_setCharacterSize(text, size);
    return text;
}

sfSprite *getsprite_fromimage
(sfTexture *text, sfVector2f pos, sfVector2f scale)
{
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, text, sfFalse);
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    return sprite;
}
