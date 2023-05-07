/*
** EPITECH PROJECT, 2022
** my_strncpy
** File description:
** copies n char
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int compteur = 0;

    while (src[compteur] != '\0' && compteur != n) {
        dest[compteur] = src[compteur];
        compteur = compteur + 1;
    }
    if (n > compteur) {
        dest[compteur] = '\0';
    }
    return (dest);
}
