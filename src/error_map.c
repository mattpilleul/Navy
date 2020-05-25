/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/navy.h"

int length_error(char **space)
{
    int i = 0;
    int j = 0;

    while (space[i] != NULL) {
        while (space[i][j] != '\n' && space[i][j] != '\0')
            j++;
        if (j != 7)
            return (FAILURE);
        j = 0;
        i++;
    }
    if (i != 4)
        return (FAILURE);
    return (0);
}
