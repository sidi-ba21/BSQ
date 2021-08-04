/*
** EPITECH PROJECT, 2021
** my put float
** File description:
** my put float
*/

#include "my.h"

int my_put_float(double nb)
{
    int whole = nb;
    int decimal = (nb * 1000000) - (whole * 1000000);

    my_put_nbr(whole);
    my_putchar('.');
    if (decimal > 1 && decimal < 10)
        my_put_nbr(decimal * 1000);
    if (decimal == 0) {
        for (int i = 0; i < 6; i++) {
            my_put_nbr(decimal);
        }
    }
    else
        my_put_nbr(decimal);
    return 0;
}
