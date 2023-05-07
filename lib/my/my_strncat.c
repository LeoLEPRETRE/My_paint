/*
** EPITECH PROJECT, 2022
** my_strncat
** File description:
** concatenates n characters
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int compteur = 0;
    int compteursrc = 0;

    while (dest[compteur] != '\0') {
        compteur = compteur + 1;
    }
    while (src[compteursrc] != '\0' && compteursrc < nb) {
        dest[compteur] = src[compteursrc];
        compteur = compteur + 1;
        compteursrc = compteursrc + 1;
    }
    return (dest);
}
