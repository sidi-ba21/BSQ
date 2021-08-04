/*
** EPITECH PROJECT, 2021
** my octal
** File description:
** my octal
*/

#include "my.h"

void my_octal(int nb)
{
    int	res;

    if (nb >= 8)
    {
        res = nb % 8;
        nb = nb / 8;
        my_octal(nb);
    }
    else if (nb > 0)
    {
        res = nb % 8;
        nb = nb / 8;
    }
    my_putchar(res + 48);
}
