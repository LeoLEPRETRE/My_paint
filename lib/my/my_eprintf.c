/*
** EPITECH PROJECT, 2022
** PROJECTS
** File description:
** my_eprintf.c
*/
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "my.h"
#include "printf.h"

int err_loop_conditions(const char *format, int *number, va_list ap)
{
    if (format[*number] == '%' && format[(*number) + 1] == '%') {
        write(2, "%", 1);
        *number = *number + 2;
        return (*number);
    }
    if (format[*number] == '%' && format[(*number) + 1] != '\0') {
        (*number)++;
        error_string(ap, format, number);
        *number = *number + 1;
        return (*number);
    } else {
        write(2, &format[*number], 1);
        *number = (*number) + 1;
    }
    return (*number);
}

int my_eprintf(const char *format, ...)
{
    va_list ap;
    int	number = 0;

    va_start(ap, format);
    while (format[number] != '\0') {
        number = err_loop_conditions(format, &number, ap);
    }
    va_end(ap);
    return (0);
}

int error_string(va_list ap, const char *s, int *number)
{
    if (s[*number] == 's')
        return err_percent_s(ap);
    if (s[*number] == 'c')
        return err_percent_c(ap);
    if (s[*number] == 'd')
        return err_percent_d(ap);
    if (s[*number] == 'f')
        return err_percent_f(ap);

    return (0);
}
