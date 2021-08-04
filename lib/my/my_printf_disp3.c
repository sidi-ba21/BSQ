/*
** EPITECH PROJECT, 2021
** display printf
** File description:
** displays functions for printf
*/

#include "my.h"
#include "function.h"
#include <stdarg.h>

void display_c(va_list arg)
{
    my_putchar(va_arg(arg, int));
}

void display_float(va_list arg)
{
    my_put_float(va_arg(arg, double));
}

void display_per(va_list arg)
{
    my_putchar('%');
}
