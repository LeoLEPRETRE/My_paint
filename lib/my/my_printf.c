/*
** EPITECH PROJECT, 2022
** disp_stdarg
** File description:
** display
*/
#include "my.h"
#include "printf.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int loop_conditions(const char *format, int *number, va_list ap)
{
    if (format[*number] == '%' && format[(*number) + 1] == '%') {
        my_putchar('%');
        *number = *number + 2;
        return (*number);
    }
    if (format[*number] == '%' && format[(*number) + 1] != '\0') {
        (*number)++;
        first_string(ap, format, number);
        second_string(ap, format, number);
        *number = *number + 1;
        return (*number);
    } else {
        my_putchar(format[*number]);
        *number = (*number) + 1;
    }
    return (*number);
}

int my_printf(const char *format, ...)
{
    va_list ap;
    int	number = 0;

    va_start(ap, format);
    while (format[number] != '\0') {
        number = loop_conditions(format, &number, ap);
    }
    va_end(ap);
    return (0);
}
