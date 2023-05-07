/*
** EPITECH PROJECT, 2022
** strisalphalib
** File description:
** lib
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
            return (0);
        i++;
    }
    return (1);
}
