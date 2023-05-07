/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** counts and returns
*/

int my_strlen(char const *str)
{
    int i = 0;
    int n = 0;
    while (str[i] != '\0'){
        i++ ;
        n++;
    }
    return (n);
}
