/*
** EPITECH PROJECT, 2021
** map in int
** File description:
** map in int and find biggest square
*/

#include "bsq.h"
#include <unistd.h>

int init_first_line(int fd, int *tab, char *buf, t_max *max)
{
    int i;
    int size_max;

    i = 0;
    size_max = max->size;
    while (read(fd, &buf[i], 1) > 0 && buf[i] != '\n') {
        tab[i] = 0;
        if (buf[i] == '.') {
            tab[i] = 1;
            if (size_max <= 0)
                size_max = save_max(max, i, 1, 1);
        }
        else if (buf[i] != 'o')
            return (bad_caractere(1, buf[i]));
        i = i + 1;
    }
    if (buf[i] == 0)
        return (bad_line_len());
    return (0);
}

int init_first_col(char *buf, int *tab, t_max *max, int line)
{
    tab[0] = 0;
    if (buf[0] == '.')
        tab[0] = 1;
    else if (buf[0] != 'o' && buf[0] != '\n')
        return (bad_caractere(line, buf[0]));
    if (max->size <= 0 && tab[0] == 1)
        max->size = save_max(max, 0, line, tab[0]);
    return (0);
}

int save_max(t_max *max, int i, int line, int current)
{
    max->size = current;
    max->x_max = i + 1;
    max->y_max = line;
    return (current);
}
