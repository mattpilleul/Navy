/*
** EPITECH PROJECT, 2019
** my_putchar.c
** File description:
** affiche un charactere
*/

#include <unistd.h>
#include "../../include/my_printf.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
