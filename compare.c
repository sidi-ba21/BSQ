/*
** EPITECH PROJECT, 2021
** compare.c
** File description:
** compare
*/

int minim(unsigned int a, unsigned int b, unsigned int c)
{
    if (a <= b && a <= c)
        return (a);
    else if (b <= a && b <= c)
        return (b);
    else
        return (c);
}
