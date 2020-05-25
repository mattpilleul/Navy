/*
** EPITECH PROJECT, 2019
** my_base.c
** File description:
** my_base
*/

#include <stdlib.h>
#include "../include/my_printf.h"

void no_print_str(char *src)
{
    int i = 0;

    while (src[i] != '\0'){
        if (src[i] < 27 || src[i] >= 127){
            my_putchar(92);
            my_putstr("0");
            my_put_nbr(src[i], 0);
        } else {
            my_putchar(src[i]);
        }
        i++;
    }
}
