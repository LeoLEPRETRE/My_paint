/*
** EPITECH PROJECT, 2022
** percent3
** File description:
** percent3
*/

#include <stdarg.h>
#include <unistd.h>
#include "my.h"
#include "printf.h"

int percent_x(va_list ap)
{
    int nb_decimal;
    char integer[50];
    int i = 0;
    nb_decimal = va_arg(ap, int);
    while (nb_decimal > 0) {
        int stock = 0;
        stock = nb_decimal % 16;
        if (stock <= 9) {
            integer[i] = stock + 48;
            i++;
        } else {
            integer[i] = stock + 87;
            i++;
        }
        nb_decimal /= 16;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(integer[j]);
    }
    return (0);
}

int percent_x2(va_list ap)
{
    int nb_decimal;
    char integer[50];
    int i = 0;
    nb_decimal = va_arg(ap, int);
    while (nb_decimal > 0) {
        int stock = 0;
        stock = nb_decimal % 16;
        if (stock <= 9) {
            integer[i] = stock + 48;
            i++;
        } else {
            integer[i] = stock + 55;
            i++;
        }
        nb_decimal /= 16;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(integer[j]);
    }
    return (0);
}

int percent_p(va_list ap)
{
    char hexarray[] = "0123456789abcdef";
    unsigned long long nb_decimal;
    char integer[50];
    int i;
    int stock;
    nb_decimal = va_arg(ap, unsigned long);

    my_putstr("0x");
    while (nb_decimal > 0) {
        stock = nb_decimal % 16;
        integer[i] = hexarray[stock];
        nb_decimal = nb_decimal / 16;
        i++;
        }
    nb_decimal /= 16;
    for (int j = i - 1; j >= 0; j = j - 1) {
        my_putchar(integer[j]);
    }
    return (0);
}

int percent_f(va_list ap)
{
    double doubler = va_arg(ap, double);
    my_put_float(doubler);
    return (0);
}
