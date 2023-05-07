/*
** EPITECH PROJECT, 2022
** strncmplib
** File description:
** lib
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    for (; s1[i] == s2[i] && s1[i] != '\0' && i < n; i++);
    return i == n ? 0 : s1[i] - s2[i];
}
