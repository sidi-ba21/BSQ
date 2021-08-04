/*
** EPITECH PROJECT, 2021
** strlen
** File description:
** strlen
*/

#include <stdlib.h>

int my_strlen(char const *str)
{
    int c;
    if (str == NULL)
        return (0);
    for (c = 0; str[c] != '\0'; c++);
    return (c);
}
