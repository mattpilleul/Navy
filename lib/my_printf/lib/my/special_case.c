/*
** EPITECH PROJECT, 2019
** special_case.c
** File description:
** special_case
*/

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "../include/my_printf.h"

void special_case(char *str, int* i, va_list ap)
{
    switch (str[* i + 1]){
    case '+' :
        my_put_nbr(va_arg(ap, int), 1);
        (* i)++;
        break;
    case '-' :
        my_put_nbr(va_arg(ap, int), 0);
        (* i)++;
        break;
    case 'u' :
        unsigned_int(va_arg(ap, unsigned int));
        break;
    case 't' :
        double_char(va_arg(ap, char **));
        break;
    }
}

