/*
** EPITECH PROJECT, 2021
** display printf
** File description:
** displays functions for printf
*/

#include "my.h"
#include "function.h"
#include <stdarg.h>

void display_s(va_list arg)
{
    my_putstr(va_arg(arg, char *));
}

void display_s_octal(va_list arg)
{
    my_put_octal(va_arg(arg, char *));
}

void display_u(va_list arg)
{
    my_put_unsigned_nb(va_arg(arg, unsigned int));
}

void display_p(va_list arg)
{
    address(va_arg(arg, long long));
}

void display_b(va_list arg)
{
    my_binary(va_arg(arg, int));
}
