/*
** EPITECH PROJECT, 2022
** PROJECTS
** File description:
** error_percent.c
*/
#include <stdarg.h>
#include <unistd.h>
#include "my.h"
#include "printf.h"

int err_percent_s(va_list ap)
{
    char *str = va_arg(ap, char *);
    if (str == NULL)
        return 84;
    write(2, str, my_strlen(str));
    return (0);
}

int err_percent_c(va_list ap)
{
    char character = va_arg(ap, int);
    write(2, &character, 1);
    return (0);
}

int err_percent_d(va_list ap)
{
    int integer = va_arg(ap, int);
    my_put_nbr(integer);
    return (0);
}

int err_percent_f(va_list ap)
{
    double doubler = va_arg(ap, double);
    my_put_float(doubler);
    return (0);
}
