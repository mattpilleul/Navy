/*
** EPITECH PROJECT, 2019
** manage_hash.c
** File description:
** manage_hash
*/

#include "../include/my_printf.h"

void manage_hash(char *str, int* i)
{
    switch (str[(* i) +1]){
    case 'x' :
        my_putstr("0x");
    }
    if (str[* i + 1] == 'X'){
        my_putstr("0X");
    } else if (str[* i + 1] == 'o'){
        my_putchar('0');
    }
}
