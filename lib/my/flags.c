/*
** EPITECH PROJECT, 2021
** flags
** File description:
** flags printf
*/

int flags(char c)
{
    if (c == 'd' || c == 'i' || c == 's' || c == 'u' || c == 'x' || c == 'X'
        || c == 'o' || c == '%' || c == 'p' || c == 'S' || c == 'c' || c == 'b'
        || c == 'f' || (c > '0' && c <= '9'))
        return (1);
    return (0);
}

int check_num(char c)
{
    if (c == 'd' || c == 'i'  || c == 'f')
        return (1);
    return (0);
}

int format(char c)
{
    if (c == '#' || c == '+' || c == '-' || c == '0' || c == ' ' || c == 'l')
        return (1);
    return (0);
}
