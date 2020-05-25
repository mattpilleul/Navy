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

int **create_empty_map(int values)
{
    int **map = malloc(sizeof(int *) * 8);
    int i = 0;
    int j = 0;

    while (i < 8){
        map[i] = malloc(sizeof(int) * 8);
        j = 0;
        while (j < 8){
            map[i][j] = values;
            j++;
        }
        i++;
    }
    return (map);
}

void length_boat(int a, int b, navy_t *boat)
{
    boat->direction = 0;
    if (a == boat->coord && b == boat->coord_2){
        if (boat->coord_2 == boat->next_2 && boat->coord < boat->next)
            boat->direction = 3;
        else if (boat->coord_2 == boat->next_2 && boat->coord > boat->next)
            boat->direction = 4;
        if (boat->coord == boat->next && boat->coord_2 < boat->next_2)
            boat->direction = 1;
        else if (boat->coord == boat->next && boat->coord_2 > boat->next_2)
            boat->direction = 2;
    }
}

int **load_boat(int **map, int a, int b, navy_t *boat)
{
    switch (boat->direction) {
    case 1 :
        for (int c = 0; c < boat->number; c++, b++)
            map[b][a] = boat->number;
        break;
    case 2 :
        for (int c = 0; c < boat->number; c++, b--)
            map[b][a] = boat->number;
        break;
    case 3 :
        for (int c = 0; c < boat->number; c++, a++)
            map[b][a] = boat->number;
        break;
    case 4 :
        for (int c = 0; c < boat->number; c++, a--)
            map[b][a] = boat->number;
        break;
    }
    return (map);
}

int **manage_ship(char ***navy, int **map, int i, int j)
{
    navy_t boat;
    int a = 0;
    int b = 0;

    boat.coord = navy[i][j][0] - 'A';
    boat.coord_2 = navy[i][j][1] - '1';
    boat.next = navy[i][j + 1][0] - 'A';
    boat.next_2 = navy[i][j + 1][1] - '1';
    boat.number = navy[i][0][0] - '0';
    while (a < 8){
        b = 0;
        while (b < 8) {
            length_boat(a, b, &boat);
            map = load_boat(map, a, b, &boat);
            b++;
        }
        a++;
    }
    return (map);
}

int **init_file_map(char ***navy)
{
    int **map = create_empty_map(-1);
    int j = 1;
    int i = 0;

    while (i < 4){
        manage_ship(navy, map, i, j);
        i++;
    }
    return (map);
}
