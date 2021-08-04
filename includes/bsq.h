/*
** EPITECH PROJECT, 2021
** bsq.h
** File description:
** bsq.h
*/

#ifndef BSQ_H_
#define BSQ_H_

#include <stddef.h>

typedef struct s_max
{
    int x_max;
    int y_max;
    int size;
    int new;
}t_max;

int put_no_arg(void);
int bad_file(char *file);
int check_nb_lines(char *str);
int bad_nb_lines(char *str, char *file);
int get_nb_lines(int *fd, char *file);
int get_nb_cols(char *file);
int get_nb_file(int ac, char **av);
int put_map_error(char *str, int line, int i);
int go_first_line(char *file, int *fd);
int save_max(t_max *max, int i, int line, int current);
void free_tab(unsigned int **tab1, unsigned int **tab2, char **buf);
int bad_alloc(char *file);
int bad_file(char *file);
int bad_line_len(void);
int bad_caractere(int line, char c);
int bad_nb_lines(char *str, char *file);
int map_empty(void);
int disp_bsq(char *file, t_max *max, int nb_lines, int nb_cols);
int init_first_line(int fd, int *tab, char *buf, t_max *max);
int init_first_col(char *buf, int *tab, t_max *max, int line);
int minim(unsigned int a, unsigned int b, unsigned int c);
int my_bsq(char *file);

#endif
