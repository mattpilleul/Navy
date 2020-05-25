/*
** EPITECH PROJECT, 2019
** my_strstr.c
** File description:
** my_strstr
*/

#include "../../include/my_printf.h"

char *my_str_checker(char *str, char *checker)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0' && checker[j] != '\0'){
        if (str[i + j] == checker[j]){
            j += 1;
        } else {
            j = 0;
            i += 1;
        }
    }
    if (str[i] == '\0'){
        return (0);
    }
    if (checker[j] == '\0'){
        return (&str[i]);
    }
}

