/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main.c
*/

#include "my.h"
#include "bsq.h"

int main(int ac, char **av)
{
    int i;
    int file_actual;
    int nb_files;

    if (ac == 1) {
        put_no_arg();
        return (84);
    }
    i = 1;
    file_actual = 1;
    if ((nb_files = get_nb_file(ac, av)) == 0)
        return (put_no_arg());
    while (file_actual <= nb_files) {
        if ((my_bsq(av[i++])) == -1)
            return (84);
        if (file_actual++ < nb_files)
            my_putstr("\n");
    }
    return (0);
}
