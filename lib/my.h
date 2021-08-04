/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** contains the prototypes of all the functions exposed by your libmy.a
*/

#ifndef MY_H
#define MY_H

#include <stdarg.h>

typedef struct initialize
{
    char flag;
    void (*ptr)(va_list);
} initialize;

void my_putchar(char c);
void my_putchar_error(char c);
void my_put_nbr(long int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char const *src);

#endif
