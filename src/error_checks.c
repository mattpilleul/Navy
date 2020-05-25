/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include "../include/my.h"
#include "../include/navy.h"

#define COLUMN "ABCDEFGH"
#define ROW "12345678"

int check_position(char *position)
{
    if (my_strlen(position) != 2)
        return (0);
    if (my_strchr((char *) COLUMN, position[0]) == NULL)
        return (0);
    if (my_strchr((char *) ROW, position[1]) == NULL)
        return (0);
    return (1);
}

int check_map(int **map)
{
    int compteur = 0;
    int nbr_final = 14;
    int i = 0;
    int j = 0;

    while (i < 8) {
        j = 0;
        while (j < 8) {
            (map[i][j] != -1) ? compteur++ : 0;
            j++;
        }
        i++;
    }
    if (compteur != nbr_final)
        return (1);
    return (0);
}
