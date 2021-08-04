/*
** EPITECH PROJECT, 2021
** function.h
** File description:
** printf functions
*/

#include <stdarg.h>

#ifndef FUNCTION_H
#define FUNCTION_H

void display_d(va_list arg);
void display_i(va_list arg);
void display_o(va_list arg);
void display_hexa(va_list arg);
void display_hexa_capitalize(va_list arg);
void display_s(va_list arg);
void display_s_octal(va_list arg);
void display_u(va_list arg);
void display_p(va_list arg);
void display_b(va_list arg);
void display_c(va_list arg);
void display_per(va_list arg);
void display_format(char a, char b);
void display_float(va_list arg);
int flags(char c);
int check_num(char c);
int format(char c);
int my_printf(char *str, ...);
void my_capitalize_hexa(unsigned int nb);
void my_hexa(unsigned int nb);
void my_percent(char a);
void my_put_octal(char *str);
void address(long int nb);
void my_binary(int nb);
void my_put_unsigned_nb(unsigned int nb);
void my_octal(int nb);
void my_put_octal(char *str);
int my_put_float(double nb);

#endif
