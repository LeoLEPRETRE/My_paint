/*
** EPITECH PROJECT, 2023
** check_asset.c
** File description:
** check asset exist
*/
#include "paint.h"

int asset_check(void)
{
    if (sfImage_createFromFile("assets/tab_colors.png") == NULL)
        return 24;
    if (sfImage_createFromFile("assets/white_image.jpg") == NULL)
        return 24;
    if (sfTexture_createFromFile("assets/background.jpg", NULL) == NULL)
        return 24;
    if (sfTexture_createFromFile("assets/plus.png", NULL) == NULL)
        return 24;
    if (sfTexture_createFromFile("assets/less.png", NULL) == NULL)
        return 24;
    if (sfTexture_createFromFile("assets/plus_w.png", NULL) == NULL)
        return 24;
    if (sfTexture_createFromFile("assets/less_w.png", NULL) == NULL)
        return 24;
    if (sfTexture_createFromFile("assets/plus_max.png", NULL) == NULL)
        return 24;
    if (sfTexture_createFromFile("assets/less_max.png", NULL) == NULL)
        return 24;
    return 0;
}

int asset_check1(void)
{
    if (sfFont_createFromFile("assets/Baxoe.ttf") == NULL)
        return 24;
    return 0;
}
