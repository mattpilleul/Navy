/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"
#include "../include/navy.h"

int man_help(char **av)
{
    my_printf("USAGE\n     ./navy [first_player_pid] navy_positions\n");
    my_printf("DESCRIPTION\n     first_player_pid: only for the 2nd player.");
    my_printf(" pid of the first player.\n     navy_positions: ");
    my_printf("file representing the positions of the ships.\n");
    return (0);
}

int main(int ac, char **av)
{
    int **map;
    int **save;
    int pid_enemy = 0;
    char ***navy;

    if (ac > 3 || ac < 2)
        return (FAILURE);
    if (my_strcmp("-h", av[1]) == 0)
        return (man_help(av[1]));
    navy = get_position_file(av[ac - 1]);
    if (navy == NULL)
        return (FAILURE);
    pid_enemy = connect_users(ac, av);
    if (pid_enemy == -1)
        return (FAILURE);
    map = init_file_map(navy);
    if (check_map(map) == 1)
        return (FAILURE);
    save = create_empty_map(0);
    navy_algorithm(ac - 2, pid_enemy, map, save);
    return (0);
}
