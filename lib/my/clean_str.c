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

void clean_string(char *str, const char c, char const *end_string)
{
    for (; str < end_string;) {
        str = my_strchrnull(str, c);
        *str++ = '\0';
    }
}