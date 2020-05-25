/*
** EPITECH PROJECT, 2019
** show_arguments
** File description:
** show_arguments
*/

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "../include/my_printf.h"

void show_arguments(char *str, int i, va_list ap)
{
    while (str[i]){
        switch (str[i + 1]){
        case 's' :
            my_putstr(va_arg(ap,char *));
            break;
        case 'd' :
        case 'i' :
            my_put_nbr(va_arg(ap, int), 0);
            break;
        default :
            show_base(str, &i, ap);
            break;
        }
        if (str[i + 1] == 'c')
            my_putchar(va_arg(ap, int));
        else if (str[i + 1] == 'p'){
            my_putstr("0x");
            my_putstr(my_put_hex_min(va_arg(ap, unsigned int)));
        }
        i = i + 2;
        while (str[i] != '%' && str[i]){
            my_putchar(str[i]);
            i++;
        }
    }
}