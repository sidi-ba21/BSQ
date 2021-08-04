/*
** EPITECH PROJECT, 2021
** revstr
** File description:
** reverse a string
*/

char *my_revstr(char *str)
{
    int a = 0;
    int b = 0;
    char c = 0;

    while (str[a] != '\0')
        a++;
    a--;
    while (b < a) {
        c = str[b];
        str[b] = str[a];
        str[a] = c;
        b++;
        a--;
    }
    return (str);
}
