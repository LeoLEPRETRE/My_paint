/*
** EPITECH PROJECT, 2022
** percent.c
** File description:
** jefaismesbails
*/
#include <stdarg.h>
#include <unistd.h>
#include "my.h"
#include "printf.h"

int percent_s(va_list ap)
{
    char *str = va_arg(ap, char *);
    if (str == NULL)
        return 84;
    my_putstr(str);
    return (0);
}

int percent_i(va_list ap)
{
    int integer = va_arg(ap, int);
    my_put_nbr(integer);
    return (0);
}

int percent_c(va_list ap)
{
    char character = va_arg(ap, int);
    my_putchar(character);
    return (0);
}

int percent_d(va_list ap)
{
    int integer = va_arg(ap, int);
    my_put_nbr(integer);
    return (0);
}

int percent_smaj(va_list ap)
{
    char character;
    int number;

    char *str = va_arg(ap, char *);
    if (str == NULL)
        return 84;
    for (int i = 0; str[i] != '\0'; i = i + 1) {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            character = str[i];
            number = character;
            percent_s2(number);
        } else
            my_putchar(str[i]);
    }
    return (0);
}
