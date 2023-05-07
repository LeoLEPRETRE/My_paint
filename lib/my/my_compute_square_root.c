/*
** EPITECH PROJECT, 2022
** my_compute_square_root
** File description:
** square root
*/

int my_compute_square_root(int nb)
{
    int a = 1;

    if (nb <= 0)
        return (0);
    while (a * a != nb) {
        if (a * a > nb) {
            return (0);
        }
        a = a + 1;
    }
    return (a);
}
