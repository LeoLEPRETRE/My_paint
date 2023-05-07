/*
** EPITECH PROJECT, 2022
** strlowcaselib
** File description:
** lib
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i = i + 1;
    }
    return (str);
}
