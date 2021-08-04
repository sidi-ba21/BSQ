/*
** EPITECH PROJECT, 2021
** get files info
** File description:
** get files info
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "bsq.h"
#include "my.h"

int get_nb_lines(int *fd, char *file)
{
    int i;
    char nb_lines[15];

    i = 0;
    if ((*fd = open(file, O_RDONLY)) == -1)
        return (bad_file(file));
    while (read(*fd, &nb_lines[i], 1) > 0 && nb_lines[i] != '\n' && i < 15)
        i = i + 1;
    if (i == 14)
        return (my_putstr_error("error: bad number on first line\n"));
    nb_lines[i] = 0;
    if (check_nb_lines(nb_lines) == -1 || i == 0)
    {
        close(*fd);
        return (bad_nb_lines(nb_lines, file));
    }
    return (my_getnbr(nb_lines));
}

int get_nb_cols(char *file)
{
    int fd;
    char buf;
    int i;

    i = 0;
    if ((fd = open(file, O_RDONLY)) == -1)
        return (bad_file(file));
    while (read(fd, &buf, 1) > 0 && buf != '\n');
    while (read(fd, &buf, 1) > 0 && buf != '\n')
        i = i + 1;
    if ((close(fd)) == -1)
        return (my_putstr_error("error: could not close file\n"));
    return (i);
}

int go_first_line(char *file, int *fd)
{
    char buf;
    int i;

    i = 0;
    buf = 0;
    if ((*fd = open(file, O_RDONLY)) == -1)
        return (bad_file(file));
    while (read(*fd, &buf, 1) > 0 && buf != '\n');
    buf = 0;
    while (read(*fd, &buf, 1) > 0 && buf != '\n')
        i = i + 1;
    if ((close(*fd)) == -1)
        return (my_putstr_error("error: could not close file\n"));
    if ((*fd = open(file, O_RDONLY)) == -1)
        return (bad_file(file));
    buf = 0;
    while (read(*fd, &buf, 1) > 0 && buf != '\n');
    return (i);
}

int get_nb_file(int ac, char **av)
{
    int i;
    int nb_files;

    i = 1;
    nb_files = 0;
    while (i < ac)
    {
        if (av[i][0] != '-')
            nb_files = nb_files + 1;
        i = i + 1;
    }
    return (nb_files);
}
