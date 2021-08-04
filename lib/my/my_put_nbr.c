/*
** EPITECH PROJECT, 2021
** my putnbr
** File description:
** putnbr
*/

#include <unistd.h>
#include "my.h"

void my_put_nbr(long int nb)
{
    int mod;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb >= 10) {
        mod = (nb % 10);
        nb = ((nb - mod) / 10);
        my_put_nbr(nb);
        my_putchar(48 + mod);
    }
    else
        my_putchar(48 + nb % 10);
}

void my_putnbr_error(int nb)
{
    if (nb >= 10)
        my_putnbr_error(nb / 10);
    my_putchar_error((nb % 10) + '0');
}
