/*
** EPITECH PROJECT, 2021
** my hexa
** File description:
** put hexa
*/

#include "my.h"

void my_hexa(unsigned int nb)
{
    int	res;

    if (nb >= 16) {
        res = nb % 16;
        nb = nb / 16;
        my_hexa(nb);
    }
    else if (nb > 0) {
        res = nb % 16;
        nb = nb / 16;
    }
    if (res > 9)
        my_putchar(res + 87);
    else
        my_putchar(res + 48);
}
