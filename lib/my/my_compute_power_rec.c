/*
** EPITECH PROJECT, 2022
** my_compute_power_rec
** File description:
** recursive square
*/

int my_compute_power_rec(int nb, int p)
{
    int results = nb;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    results = nb * my_compute_power_rec(nb, p - 1);
    return (results);
}
