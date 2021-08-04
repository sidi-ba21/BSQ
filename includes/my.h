/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** contains the prototypes of all the functions exposed by your libmy.a
*/

#ifndef MY_H
#define MY_H

void my_putchar(char c);
void my_putchar_error(char c);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
void my_putnbr_error(int nb);
int my_putstr(char const *str);
int my_putstr_error(char *str);
int my_putstr_secure_error(char *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strdup(char const *src);
char *my_memset(char *s, char c, int size);
int my_show_word_array(char * const *tab);
int my_printf(char *str, ...);
void swap_tab(unsigned int **tab1, unsigned int **tab2);

#endif
