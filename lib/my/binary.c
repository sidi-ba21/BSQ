/*
** EPITECH PROJECT, 2021
** my binary
** File description:
** my binary
*/

#include "my.h"

void my_binary(unsigned int nb)
{
    int res;

    if (nb >= 2)
    {
        res = nb % 2;
        nb = nb / 2;
        my_binary(nb);
    }
    else if (nb > 0)
    {
        res = nb % 2;
        nb = nb / 2;
    }
    my_putchar(res + 48);
}
