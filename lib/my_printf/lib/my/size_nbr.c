/*
** EPITECH PROJECT, 2019
** size_nbr.c
** File description:
** size_nbr
*/

#include <stdlib.h>
#include "../include/my_printf.h"

int size_nbr(int nb)
{
    int i = 0;

    while (nb / 10) {
        i = i + 1;
        nb = nb / 10;
    }
    return (i);
}
