/*
** EPITECH PROJECT, 2019
** printf.c
** File description:
** printf.c
*/

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "../include/my_printf.h"

void show_base(char *str, int* i, va_list ap)
{
    if (str[* i + 1] == '#'){
        (* i)++;
        manage_hash(str, i);
    }
    switch (str[* i + 1]){
    case 'X' :
        my_putstr(my_put_hex_maj(va_arg(ap, unsigned int)));
        break;
    case 'x' :
        my_putstr(my_put_hex_min(va_arg(ap, unsigned int)));
        break;
    case 'S' :
        no_print_str(va_arg(ap, char *));
        break;
    case 'o' :
        my_putstr(my_put_nbr_oct(va_arg(ap, unsigned int)));
        break;
    case 'b' :
        my_putstr(my_put_nbr_bin(va_arg(ap, unsigned int)));
        break;
    case '%' :
        my_putstr("%");
    default :
        special_case(str, i, ap);
    }
}
