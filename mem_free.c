/*
** EPITECH PROJECT, 2021
** free.c
** File description:
** free and check alloc
*/

#include <stdlib.h>
#include "bsq.h"
#include "my.h"

void free_tab(unsigned int **tab1, unsigned int **tab2, char **buf)
{
    if (*tab1)
        free(*tab1);
    if (*tab2)
        free(*tab2);
    if (*buf)
        free(*buf);
}

int bad_alloc(char *file)
{
    my_putstr_error(file);
    my_putstr_error(" : could not alloc => can't disp the map\n");
    return (-1);
}
