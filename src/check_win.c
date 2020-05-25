/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include <unistd.h>
#include "../include/my.h"
#include "../include/navy.h"

int check_ship_id(int ship)
{
    int i = 0;

    while (i < 4) {
        if (ship == ship_ids[i])
            return (1);
        i++;
    }
    return (0);
}

int get_end_status(int **map)
{
    int boat_id = 0;
    int i = 0;
    int j = 0;

    while (i < 8) {
        for (j = 0; j < 8; j++)
            boat_id += check_ship_id(map[i][j]);
        if (boat_id != 0)
            return (0);
        i++;
    }
    return (1);
}

int check_victory(int **map, int pid_enemy, int id_user)
{
    int the_end = 0;

    if (id_user == 0) {
        the_end = get_end_status(map);
        usleep(5000);
        if (the_end == 1)
            kill(pid_enemy, SIGUSR2);
        else
            kill(pid_enemy, SIGUSR1);
    } else {
        pause();
        if (create_bytes(-1) == 1)
            return (1);
        else
            return (0);
    }
    return (the_end);
}
