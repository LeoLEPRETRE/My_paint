/*
** EPITECH PROJECT, 2022
** my_strcat
** File description:
** concatenates
*/
#include <stdlib.h>
#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int compteur = 0;
    char *str =
    malloc(sizeof(char) * ((my_strlen(src) + 1) + (my_strlen(dest) + 1)));

    for (int i = 0; dest[i]; i++, compteur++){
        str[compteur] = dest[i];
    }
    for (int i = 0; src[i]; i++, compteur++){
        str[compteur] = src[i];
    }
    str[compteur] = '\0';
    return (str);
}
