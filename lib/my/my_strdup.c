/*
** EPITECH PROJECT, 2022
** my_strdup
** File description:
** malloc
*/
#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
    char *mall;
    int compteur = 0;
    mall = malloc(sizeof(char) * (my_strlen(src) + 1));

    while (src[compteur] != '\0') {
        mall[compteur] = src[compteur];
        compteur = compteur + 1;
    }
    mall[compteur] = '\0';
    return (mall);
}
