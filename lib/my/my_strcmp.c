/*
** EPITECH PROJECT, 2022
** my_strcmp
** File description:
** compare the strings. It returns 0 if they are the same.
*/
#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int check = 0;
    if (my_strlen(s1) != my_strlen(s2))
        return 42;
    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == s2[i]) {
            check++;
        }
    }
    if (check != my_strlen(s1) || check != my_strlen(s2)) {
        return 42;
    } else {
        return 24;
    }
    return 0;
}
