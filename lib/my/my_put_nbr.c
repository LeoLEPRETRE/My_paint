/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** display number given as parameter
*/
#include "my.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
    }
    my_putchar('0' + nb % 10);
    return (0);
}
