/*
** EPITECH PROJECT, 2022
** my_getfloat.c
** File description:
** my_getfloat
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

float my_getfloat(char const *str)
{
    int i = 0;
    int nb = 0;
    int n = 1;
    float nb_after = 0.00;
    while (str[i] < 48 || str[i] > 57)
        i++;
    int save = i;
    while (str[i] <= 57 && str[i] >= 48) {
        nb = nb * 10 + (str[i] - 48);
        i++;
    }
    if (str[i] == '.') {
        for (; str[i + 1] <= 57 && str[i + 1] >= 48; n = n * 10, i++)
            nb_after = nb_after * 10 + (str[i + 1] - 48);
    }
    float e = nb_after / n;
    float a = nb + e;
    if (str[save - 1] == '-')
        a = a * -1;
    return a;
}
