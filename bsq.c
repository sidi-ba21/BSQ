/*
** EPITECH PROJECT, 2021
** bsq.c
** File description:
** bsq.c
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "bsq.h"
#include "my.h"

int array_int(char *buf, unsigned int *tab1,
                    unsigned int *tab2, t_max *max)
{
    static int line;
    unsigned int size_max, i;

    i = 1;
    ((max->new)++ == 1) ? (line = 2) : (0);
    if ((init_first_col(buf, tab2, max, line)) != 0)
        return (-1);
    size_max = max->size;
    for (; buf[i] != '\n'; ++i) {
        tab2[i] = 0;
        if (buf[i] == '.') {
            tab2[i] = minim(tab2[i - 1], tab1[i - 1], tab1[i]) + 1;
            if (tab2[i] > size_max)
                size_max = save_max(max, i, line, tab2[i]);
        }
        else if (buf[i] != 'o')
            return (bad_caractere(line, buf[i]));
    }
    ++line;
    return (0);
}

int verify_bsq(int fd, int nb_lines, int nb_cols, t_max *max)
{
    char *buf = malloc(sizeof(char) * (nb_cols + 2));
    unsigned int *tab1 = malloc(sizeof(int) * (nb_cols + 1));
    unsigned int *tab2 = malloc(sizeof(int) * (nb_cols + 1));
    unsigned int i;

    i = 0;
    if (buf == NULL || tab1 == NULL || tab2 == NULL)
        return (bad_alloc("error"));
    if (init_first_line(fd, tab1, buf, max) == -1)
        return (-1);
    while (++i < nb_lines) {
        if (read(fd, &buf[0], nb_cols + 1) != nb_cols + 1)
            return (bad_line_len());
        if ((array_int(&buf[0], tab1, tab2, max)) == -1)
            return (-1);
        swap_tab(&tab1, &tab2);
    }
    if (read(fd, &buf[0], nb_cols + 1) > 0)
        return (bad_nb_lines("", ""));
    free_tab(&tab1, &tab2, &buf);
    return (0);
}

int my_bsq(char *file)
{
    int nb_lines;
    int nb_cols;
    t_max maximum;
    int fd;

    maximum.size = 0;
    maximum.new = 1;
    if ((nb_lines = get_nb_lines(&fd, file)) == -1)
        return (-1);
    if ((nb_cols = get_nb_cols(file)) == -1)
        return (-1);
    if ((verify_bsq(fd, nb_lines, nb_cols, &maximum)) == -1) {
        close(fd);
        return (-1);
    }
    close(fd);
    fd = disp_bsq(file, &maximum, nb_lines, nb_cols);
    return ((fd == -1) ? (-1) : (close(fd)));
}
