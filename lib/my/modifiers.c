/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** modifiers.c
*/

#include <stdarg.h>
#include <unistd.h>
#include "my.h"
#include "printf.h"

int end_modifiers(va_list ap, char const *s, int *number)
{
    switch (s[*number + 1]) {
        case 'd':
            (*number)++;
            return percent_d(ap);
        case 'i':
            (*number)++;
            return percent_i(ap);
        case 'u':
            (*number)++;
            return percent_u(ap);
        case 's':
            (*number)++;
            return percent_s(ap);
    }
    return (0);
}

int modifiers_case(va_list ap, char const *s, int *number)
{
    switch (s[*number + 1]) {
        case 'x':
            my_putstr("0x");
            (*number)++;
            return percent_x(ap);
        case 'X':
            my_putstr("0X");
            (*number)++;
            return percent_x2(ap);
        case 'o':
            my_putstr("0");
            (*number)++;
            return percent_o(ap);
        case 'c':
            (*number)++;
            return percent_c(ap);
    }
    return end_modifiers(ap, s, number);
}

int modifiers(va_list ap, char const *s, int *number)
{
    if (s[*number] == '#') {
        return modifiers_case(ap, s, number);
    }
    return 0;
}
