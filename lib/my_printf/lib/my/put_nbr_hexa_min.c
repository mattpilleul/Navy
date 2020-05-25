/*
** EPITECH PROJECT, 2019
** my_put_hex_min.c
** File description:
** my_put_hex_min
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "../../include/my_printf.h"

char *my_put_hex_min(unsigned int nb)
{
    unsigned int nbr = 1;
    int i = 0;
    unsigned int resultat;
    char *str = malloc(sizeof(char) * size_nbr(nb));

    while (nb >= 1){
        nbr = nb % 16;
        if (nbr < 10)
            str[i] = nbr + 48;
        else
            str[i] = nbr / 10 - 1 + 'f';
        nb = nb / 16;
        i++;
    }
    return (my_revstr(str));
}
