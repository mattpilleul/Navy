/*
** EPITECH PROJECT, 2019
** my_put_nbr_bin.c
** File description:
** my_put_nbr_bin
*/

#include <stdlib.h>
#include "../../include/my_printf.h"

char *my_put_nbr_bin(unsigned int nb)
{
    int nbr = 1;
    int i = 0;
    int resultat = 0;
    char *str = malloc(sizeof(char) *size_nbr(nb));

    while (nb > 0){
        nbr = nb % 2;
        str[i] = nbr + 48;
        nb = nb / 2;
        i++;
    }
    return (my_revstr(str));
}
