/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** affiche une chaine
*/

#include <unistd.h>
#include "../../include/my_printf.h"
#include <stddef.h>

int my_putstr(char const *str)
{
    int i = 0;

    if (str == NULL) {
        write(1, "astek", 6);
        return (0);
    }
    while (str[i] != '\0')
    {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
