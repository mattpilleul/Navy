/*
** EPITECH PROJECT, 2019
** unsigned_int.c
** File description:
** unsigned_int
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "../include/my_printf.h"

void unsigned_int(unsigned int nb)
{
    unsigned int n = 1;

    if (nb == 0){
        my_putchar('0');
    }
    while ((nb / 10) / n != 0){
        n = n * 10;
    }
    while (n > 0){
        my_putchar(nb/n + 48);
        nb = nb % n;
        n = n / 10;
    }
}
