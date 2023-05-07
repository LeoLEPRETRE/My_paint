/*
** EPITECH PROJECT, 2022
** my_strcpy
** File description:
** copies string
*/

char *my_strcpy(char *dest, char const *src)
{
    int compteur = 0;

    while (src[compteur] != '\0') {
        dest[compteur] = src[compteur];
        compteur = compteur + 1;
    }
    dest[compteur] = '\0';
    return (dest);
}
