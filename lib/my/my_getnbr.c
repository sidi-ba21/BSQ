/*
** EPITECH PROJECT, 2021
** mygetnbr
** File description:
** nbr
*/

#include <stdio.h>

int my_getnbr(char *str)
{
    int nb = 0;
    int n = 1;
    int i = 0;

    for (i = 0; str[i] == '-' || str[i] == '+'; i++) {
        if (str[i] == '-')
            n *= -1;
    }
    while (str[i] != '\0') {
        nb = (nb * 10 + (str[i] - '0'));
        if (str[i] < '0' || str[i] > '9')
            return (nb * n);
        else if (nb < 0 && nb != -2147483648 && n == -1 || nb < 0 && n != -1)
            return (0);
        i++;
    }
    return (nb * n);
}
