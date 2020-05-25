/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** affiche un nombre
*/

#include "../../include/my_printf.h"

void my_put_nbr(int nb, int i)
{
    int n = 1;

    while ((nb / 10) / n != 0){
        n = n * 10;
    }
    while (n > 0) {
        my_putchar(nb / n + 48);
        nb = nb % n;
        n = n / 10;
    }
    if (nb >= 0 && i == 1){
        my_putchar('+');
    } else if (nb < 0){
        my_putchar('-');
        nb = nb * -1;
    }
}
