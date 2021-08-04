/*
** EPITECH PROJECT, 2021
** my address
** File description:
** put adress
*/

#include "my.h"
#include "function.h"

void address(long int nb)
{
    if (nb == 0)
        my_putstr("0");
    else
    {
        my_putstr("0x");
        my_hexa(nb);
    }
}
