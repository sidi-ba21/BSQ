/*
** EPITECH PROJECT, 2021
** my printf
** File description:
** printf
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"
#include "function.h"

static const initialize func[13] = {
    {'d', &display_d},
    {'i', &display_i},
    {'s', &display_s},
    {'c', &display_c},
    {'u', &display_u},
    {'x', &display_hexa},
    {'X', &display_hexa_capitalize},
    {'o', &display_o},
    {'b', &display_b},
    {'p', &display_p},
    {'S', &display_s_octal},
    {'%', &display_per},
    {'f', &display_float},
};

void my_call_function(char c, va_list arg)
{
    int i = 0;
    while (i < 13) {
        if (func[i].flag == c) {
            func[i].ptr(arg);
            return;
        }
        i++;
    }
}

int  my_printf(char *s, ...)
{
    va_list ap;
    va_start(ap, s);
    int i = 0;

    while (s[i] != '\0') {
        if (s[i] == '%' && flags(s[i + 1]) == 1) {
            my_call_function(s[i + 1], ap);
            i = i + 1;
        }
        else if (s[i] == '%' && format(s[i + 1]) == 1 && flags(s[i + 2]) == 1) {
            display_format(s[i + 1], s[i + 2]);
            if (flags(s[i + 2]) == 1)
                my_call_function(s[i + 2], ap);
            i = i + 2;
        }
        else
            my_putchar(s[i]);
        i++;
    }
    va_end(ap);
}
