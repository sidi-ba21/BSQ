/*
** EPITECH PROJECT, 2021
** strcpy
** File description:
** copy a string
*/

char *my_strcpy(char *dest, char const *src)
{
    int c;
    for (c = 0; src[c] != '\0';c++)
        dest[c] = src[c];
    dest[c] = '\0';
    return (dest);
}
