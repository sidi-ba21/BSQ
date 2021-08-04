/*
** EPITECH PROJECT, 2021
** put unsigned int
** File description:
** put unsigned integer
*/

#include "my.h"

void my_put_unsigned_nb(unsigned int nb)
{
    unsigned int n;

    if (nb >= 10) {
        n = nb % 10;
        nb = nb / 10;
        my_put_unsigned_nb(nb);
        my_putchar(n + 48);
    }
    else
        my_putchar(nb + 48);
}
