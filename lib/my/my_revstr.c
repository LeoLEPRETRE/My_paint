/*
** EPITECH PROJECT, 2022
** my_revstr
** File description:
** reverse a string
*/

char *my_revstr(char *str)
{
    int compteur = 0;
    int start = 0;
    int swap = 0;

    while (str[compteur] != '\0') {
        compteur = compteur + 1;
    }
    while (start < compteur / 2) {
        swap = str[start];
        str[start] = str[compteur - start - 1];
        str[compteur - start - 1] = swap;
        start = start + 1;
    }
    return (str);
}
