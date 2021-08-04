/*
** EPITECH PROJECT, 2021
** strcat
** File description:
** concatenes string
*/

char *my_strcat(char *dest, char const *src)
{
    int c = 0;
    int d;

    while (dest[c] != '\0')
        c++;
    for (d = 0 ; src[d] != '\0' ;d++)
        dest[c+d] = src[d];
    dest[c+d] = '\0';
    return (dest);
}
