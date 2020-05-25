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

int error_position3(char **space, int i, int ship)
{
    int next = 0;

    if (space[i][2] == space[i][5] && space[i][3] != space[i][6]){
        if (space[i][3] > space[i][6])
            next = space[i][3] - space[i][6];
        else
            next = space[i][6] - space[i][3];
    }
    if (space[i][3] == space[i][6] && space[i][2] != space[i][5]){
        if (space[i][2] > space[i][5])
            next = space[i][2] - space[i][5];
        else
            next = space[i][5] - space[i][2];
    }
    if (next == ship)
        return (0);
    return (1);
}

int error_position2(char **space, int i)
{
    int ship = space[i][0] - '0' - 1;
    static char string[5] = {0, 0, 0, 0, 0};

    if ((space[i][0] > '5' || space[i][0] < '2') || my_strchr(string,
    space[i][0]) != NULL)
        return (1);
    string[i] = space[i][0];
    if (space[i][1] != ':' || space[i][4] != ':')
        return (1);
    if ((space[i][2] < 'A' || space[i][2] > 'H') || (space[i][5] < 'A' ||
    space[i][5] > 'H')
    || (space[i][3] < '1' || space[i][3] > '8') || (space[i][6] < '1' ||
    space[i][6] > '8'))
        return (1);
    if (error_position3(space, i, ship) == 1)
        return (1);
    return (0);
}

int error_position(char **space)
{
    int interup = 0;
    int i = 0;

    while (space[i] != NULL) {
        interup = error_position2(space, i);
        if (interup == 1)
            return (1);
        i++;
    }
    return (0);
}