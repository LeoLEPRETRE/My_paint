/*
** EPITECH PROJECT, 2022
** put_float
** File description:
** printfloat
*/
#include "my.h"
#include "printf.h"
#include <stdio.h>

int arround(long int decimal, long int conserve)
{
    if (conserve >= decimal * 10 + 5) {
        decimal = decimal + 1;
    }
    my_put_nbr(decimal);
    return (0);
}

int my_put_float(double number)
{
    signed long int decimal;
    int pow = 1;
    double doubler = number;
    signed long int conserve;

    my_put_nbr(doubler);
    my_putchar('.');
    doubler = number * 1000000;
    decimal = doubler;
    conserve = number * 10000000;
    pow = 1000000;
    decimal = decimal % pow;
    conserve = conserve % (pow * 10);
    arround(decimal, conserve);
    return (0);
}
