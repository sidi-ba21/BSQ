/*
** EPITECH PROJECT, 2021
** display format
** File description:
** display format
*/

#include <stdarg.h>
#include "my.h"
#include "function.h"

void display_format(char a, char b)
{
    if (a == '#') {
        if (b == 'o')
            my_putchar('0');
        if (b == 'x')
            my_putstr("0x");
        else if (b == 'X')
            my_putstr("0X");
        else
            return;
    }
    if (a == ' ' && flags(b) == 1)
        my_putchar(' ');
    else if (a == '+' && check_num(b) == 1) {
        my_putchar('+');
    }
}
