/*
** EPITECH PROJECT, 2021
** disp bssq.c
** File description:
** disp bsq.c
*/

#include <stdlib.h>
#include <unistd.h>
#include "bsq.h"
#include "my.h"

static void print_line(char *buf, t_max *max, int nb_cols)
{
    int i;

    i = 1;
    write(1, &buf[0], max->x_max - max->size);
    while (i++ <= max->size)
        write(1, "x", 1);
    i = max->x_max;
    write(1, &buf[i], nb_cols - i);
}

int disp_bsq(char *file, t_max *max, int nb_lines, int nb_cols)
{
    char *buf;
    int fd, i;

    i = 1;
    if ((nb_cols = go_first_line(file, &fd)) == -1)
        return (-1);
    if ((buf = (char*)malloc(sizeof(char) * (nb_cols + 1))) == NULL)
        return (bad_alloc(file));
    buf[nb_cols++] = 0;
    while (i <= nb_lines)
    {
        if ((read(fd, buf, nb_cols)) < 0)
            return (my_putstr_error("error: could not read\n"));
        if (i++ <= max->y_max - max->size || i - 1 > max->y_max)
            write(1, buf, nb_cols);
        else
            print_line(buf, max, nb_cols);
    }
    free(buf);
    return (fd);
}
