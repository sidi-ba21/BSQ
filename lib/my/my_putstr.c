/*
** EPITECH PROJECT, 2021
** myputstr
** File description:
** function that displays onebyone a characters of a string.
*/

#include "my.h"
#include <unistd.h>

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return (0);
}

int my_putstr_error(char *str)
{
    int i;

    i = 0;
    while (str[i])
        write(2, &str[i++], 1);
    return (-1);
}

int my_putstr_secure_error(char *str)
{
    int i;

    i = 0;
    while (str[i] && i < 82)
        write(2, &str[i++], 1);
    return (-1);
}
