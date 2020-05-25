/*
** EPITECH PROJECT, 2019
** my_base.c
** File description:
** my_base
*/

#include <stdlib.h>
#include "../../include/my_printf.h"

char *my_put_nbr_oct(unsigned int nb)
{
    int n = 1;
    int i = 0;
    int resultat;
    char *str = malloc(sizeof(char) * size_nbr(nb));

    while (nb > 0){
        resultat = nb % 8;
        nb = nb / 8;
        str[i] = resultat + 48;
        i++;
    }
    return (my_revstr(str));
}
