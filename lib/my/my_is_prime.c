/*
** EPITECH PROJECT, 2022
** my_is_prime
** File description:
** to poland
*/

int my_is_prime(int nb)
{
    int a = 2;

    if (nb <= 1) {
        return (0);
    }
    while (nb > a) {
        if (nb % a == 0)
            return (0);
        a = a + 1;
    }
    return (1);
}
