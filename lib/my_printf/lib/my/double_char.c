/*
** EPITECH PROJECT, 2019
** display_tab.c
** File description:
** double_char
*/

#include "../include/my_printf.h"

void double_char(char **str)
{
    int i = 0;

    while (str[i] != 0){
        my_putstr(str[i]);
        my_putchar(' ');
        i++;
    }
}
