/*
** EPITECH PROJECT, 2021
** swap tab
** File description:
** swap tab
*/

void swap_tab(unsigned int **tab1, unsigned int **tab2)
{
    unsigned int *tmp;

    tmp = *tab1;
    *tab1 = *tab2;
    *tab2 = tmp;
}
