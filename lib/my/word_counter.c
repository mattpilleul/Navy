/*
** EPITECH PROJECT, 2019
** lib
** File description:
** my_getnbr
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/my.h"
#include "../../include/navy.h"

unsigned long word_counter(char *str, char const *end_string)
{
    unsigned long nbr_count = 0;

    str = manage_empty(str, end_string);
    for (; str < end_string;) {
        if (*str)
            nbr_count++;
        for (; *str;)
            str++;
        str = manage_empty(str, end_string);
    }
    return (nbr_count);
}