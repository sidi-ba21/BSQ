/*
** EPITECH PROJECT, 2021
** error.c
** File description:
** error.c
*/

#include "my.h"

int bad_file(char *file)
{
    my_putstr_error("error opening file: ");
    my_putstr_error(file);
    my_putstr_error("\n");
    return (-1);
}

int bad_line_len(void)
{
    my_putstr_error(" ==> ERROR <==\n");
    my_putstr_error(" size of lines are different !\n");
    my_putstr_error(" maybe the map is too short  !\n");
    return (-1);
}

int bad_caractere(int line, char c)
{
    my_putstr_error(" error ! bad caractere on the line ");
    my_putnbr_error(line + 1);
    my_putstr_error(": '");
    my_putchar_error(c);
    my_putstr_error("'\n");
    return (-1);
}

int bad_nb_lines(char *str, char *file)
{
    my_putstr_error(file);
    my_putstr_error(" ==> ERROR <==\n");
    if (str[0] != 0)
    {
        my_putstr_error(" ==> bad caracteres in first line: '");
        my_putstr_secure_error(str);
        my_putstr_error("'\n");
    }
    else
    {
        my_putstr_error(" First line doesn't match with number of lines !\n");
    }
    return (-1);
}

int map_empty(void)
{
    my_putstr_error("map empty\n");
    return (-1);
}
