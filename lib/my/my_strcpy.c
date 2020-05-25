/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include <unistd.h>
#include <stdlib.h>

char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}