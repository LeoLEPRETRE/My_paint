/*
** EPITECH PROJECT, 2022
** percentprintf
** File description:
** percent_2
*/

#include <stdarg.h>
#include <unistd.h>
#include "my.h"
#include "printf.h"

int percent_u(va_list ap)
{
    int integer = va_arg(ap, unsigned int);
    my_put_nbr(integer);
    return (0);
}

int percent_g(va_list ap)
{
    int integer = va_arg(ap, double);
    my_put_nbr(integer);
    return (0);
}

int percent_o(va_list ap)
{
    int nb_decimal;
    int integer = 0;
    int i = 1;
    nb_decimal = va_arg(ap, int);

    while (nb_decimal != 0) {
        integer += (nb_decimal % 8) * i;
        nb_decimal /= 8;
        i *= 10;
    }
    my_put_nbr(integer);
    return 0;
}

int percent_s2(int number)
{
    int integer = 0;
    int i = 1;

    while (number != 0) {
        integer += (number % 8) * i;
        number /= 8;
        i *= 10;
    }
    my_put_nbr(integer);
    return (0);
}

int percent_b(va_list ap)
{
    int nb_decimal;
    int integer = 0;
    int i = 1;
    nb_decimal = va_arg(ap, int);
    while (nb_decimal != 0) {
        integer += (nb_decimal % 2) * i;
        nb_decimal /= 2;
        i *= 10;
    }
    my_put_nbr(integer);
    return 0;
}
