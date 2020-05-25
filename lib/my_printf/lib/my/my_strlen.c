/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** affiche la longueur d'une chaine
*/

#include "../../include/my_printf.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        i++;
    }
    return (i);
}
