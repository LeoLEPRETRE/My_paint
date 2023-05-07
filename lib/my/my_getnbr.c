/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** my_getnbr
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;

    while (str[i] < 48 || str[i] > 57) {
        i++;
    }
    while (str[i] <= 57 && str[i] >= 48) {
        nb = nb * 10 + (str[i] - 48);
        i++;
    }
    return nb;
}
