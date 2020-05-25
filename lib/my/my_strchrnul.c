/*
** EPITECH PROJECT, 2019
** lib
** File description:
** my_getnbr
*/

#include "../../include/my.h"
#include "../../include/navy.h"

char *my_strchrnull(char *str, int c)
{
    while (*str){
        if (*str == c)
            break;
        str++;
    }
    return (str);
}
