/*
** EPITECH PROJECT, 2021
** display printf
** File description:
** displays functions for printf
*/

#include <stdarg.h>
#include "my.h"
#include "function.h"

void display_d(va_list arg)
{
    my_put_nbr(va_arg(arg, int));
}

void display_i(va_list arg)
{
    my_put_nbr(va_arg(arg, int));
}

void display_o(va_list arg)
{
    my_octal(va_arg(arg, int));
}

void display_hexa(va_list arg)
{
    my_hexa(va_arg(arg, int));
}

void display_hexa_capitalize(va_list arg)
{
    my_capitalize_hexa(va_arg(arg, int));
}
