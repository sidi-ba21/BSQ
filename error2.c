/*
** EPITECH PROJECT, 2021
** option.c
** File description:
** option.c
*/

#include "my.h"

int put_no_arg(void)
{
    my_putstr_error("./bsq [map1] [map2] ...\n");
    return (-1);
}

int check_nb_lines(char *str)
{
    int i;

    i = 0;
    while (str[i] && i < 100)
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return (-1);
        i = i + 1;
    }
    return (0);
}
