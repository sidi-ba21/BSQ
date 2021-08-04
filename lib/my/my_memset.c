/*
** EPITECH PROJECT, 2021
** mymemset
** File description:
** my memeset
*/

char *my_memset(char *s, char c, int size)
{
    int i;

    i = 0;
    while (i < size)
        s[i++] = c;
    return (s);
}
