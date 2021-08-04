/*
** EPITECH PROJECT, 2021
** mem_alloc
** File description:
** mem_alloc
*/

#include <stdlib.h>
#include "my.h"

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    int i;
    char **c;

    c = malloc(sizeof(char *) * (nb_rows + 1));

    i = 0;
    while (i < nb_rows) {
        c[i] = malloc(sizeof(char) * (nb_cols + 1));
        i++;
    }
    return (c);
}
