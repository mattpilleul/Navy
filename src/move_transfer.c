/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include <sys/types.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/navy.h"

char *get_coord(void)
{
    char direction[3] = {0, 0, 0};
    int nbr = 0;
    int i = 1;

    while (i <= 3){
        nbr = get_move(nbr);
        i++;
    }
    direction[0] = nbr + 'A';
    nbr = 0;
    i = 1;
    while (i <= 3){
        nbr = get_move(nbr);
        i++;
    }
    direction[1] = nbr + '1';
    return (my_strdup(direction));
}

int output_moves(int pid_enemy, int nbr)
{
    int bytes;
    int catch_them_all;
    int i = 1;

    while (i <= 3) {
        bytes = nbr & 0b100;
        nbr = nbr << 1;
        usleep(5000);
        if (bytes == 0)
            catch_them_all = kill(pid_enemy, SIGUSR1);
        else
            catch_them_all = kill(pid_enemy, SIGUSR2);
        if (catch_them_all == -1)
            return (-1);
        i++;
    }
    return (0);
}
