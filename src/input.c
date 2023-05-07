/*
** EPITECH PROJECT, 2022
** PROJECTS
** File description:
** input.c
*/
#include "paint.h"

char *my_getstr(paint_t *p)
{
    p->input_str = NULL;
    size_t size = 0;
    if (getline(&p->input_str, &size, stdin) != -1)
        return p->input_str;
    my_printf("\nERROR: Couldn't read input from stdin. ");
    my_printf("The program will now exit.\n");
    return NULL;
}

int check_getstr(paint_t *p)
{
    p->error = 0;
    if (my_getstr(p) == NULL) {
        p->error = 1;
        return 84;
    }
    return 42;
}
