/*
** EPITECH PROJECT, 2023
** clean_str
** File description:
** tek1
*/
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int check_end_of_str_space(char *str)
{
    int y = 0;

    for (; str[y] != '\0'; y++);
    y = y - 1;
    while (str[y] == ' ' || str[y] == '\t') {
        y = y - 1;
    }
    return y;
}

void print_words(char *str, int x, char *dest, int *i)
{
    int check = check_end_of_str_space(str);
    if (str[x] != ' ' && str[x] != '\t') {
        dest[(*i)] = str[x];
        (*i)++;
    } else {
        if (x < check && str[x + 1] != ' '
            && str[x + 1] != '\t') {
            dest[(*i)] = ' ';
            (*i)++;
        }
    }
}

char *clean_str(char *str)
{
    int x = 0;
    int space = 0;
    char *dest;
    dest = malloc(sizeof(char) * (my_strlen(str) + 1));
    int i = 0;
    for (; str[x] != '\0'; x++) {
        if (str[x] != ' ' && str[x] != '\t')
            space ++;
        if (space != 0) {
            print_words(str, x, dest, &i);
        }
    }
    dest[i] = '\0';
    return dest;
}
