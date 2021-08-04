/*
** EPITECH PROJECT, 2021
** my capitalize hexa
** File description:
** capitalize hexa
*/

#include "my.h"
#include "function.h"

void my_capitalize_hexa(unsigned int nb)
{
    int	res;

    if (nb >= 16)
    {
        res = nb % 16;
        nb = nb / 16;
        my_capitalize_hexa(nb);
    }
    else if (nb > 0)
    {
        res = nb % 16;
        nb = nb / 16;
    }
    if (res > 9)
        my_putchar(res + 55);
    else
        my_putchar(res + 48);
}
