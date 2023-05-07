/*
** EPITECH PROJECT, 2022
** first_string
** File description:
** for_printf
*/

#include <stdarg.h>
#include <unistd.h>
#include "my.h"
#include "printf.h"

int first_string(va_list ap, const char *s, int *number)
{
    if (s[*number] == 's')
        return percent_s(ap);
    if (s[*number] == 'c')
        return percent_c(ap);
    if (s[*number] == 'i')
        return percent_i(ap);
    if (s[*number] == 'd')
        return percent_d(ap);
    if (s[*number] == 'u')
        return percent_u(ap);
    if (s[*number] == 'g')
        return percent_g(ap);
    if (s[*number] == 'o')
        return percent_o(ap);
    if (s[*number] == 'b')
        return percent_b(ap);
    if (s[*number] == 'x')
        return percent_x(ap);
    return (0);
}

int second_string(va_list ap, const char *s, int *number)
{
    if (s[*number] == 'X')
        return percent_x2(ap);
    if (s[*number] == 'S')
        return percent_smaj(ap);
    if (s[*number] == 'p')
        return percent_p(ap);
    if (s[*number] == 'f')
        return percent_f(ap);
    if (s[*number] == 'F')
        return percent_f(ap);
    if (s[*number] == '#')
        return modifiers(ap, s, number);
    return (0);
}
