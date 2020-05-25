/*
** EPITECH PROJECT, 2019
** my_revstr.c
** File description:
** inversement d'une chaine
*/

#include "../../include/my_printf.h"

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (str[i] != '\0') {
        i += 1;
    }
    i -= 1;
    while (j < i) {
        k = str[j];
        str[j] = str[i];
        str[i] = k;
        i -= 1;
        j += 1;
    }
    return (str);
}
