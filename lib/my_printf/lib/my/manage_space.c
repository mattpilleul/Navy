/*
** EPITECH PROJECT, 2019
** manage_space.c
** File description:
** manage_space
*/

#include "../include/my_printf.h"

void manage_space(char *str, int * i)
{
    int rm_space = 0;
    int a = (* i);

    while (str[a + 1] == ' '){
        a++;
        rm_space++;
    }
    if (str[a + 1] == 'd'){
        while ((* i) != a){
            my_putchar(' ');
            (* i)++;
        }
    } else {
        (* i) = a;
    }
}
