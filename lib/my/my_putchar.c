/*
** EPITECH PROJECT, 2021
** putchar
** File description:
** display
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putchar_error(char c)
{
    write(2, &c, 1);
}
