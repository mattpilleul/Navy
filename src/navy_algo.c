/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include <stdlib.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/navy.h"

char *print_attack(void)
{
    char *display_attack;

    while (42){
        my_putstr("attack: ");
        display_attack = get_next_line(0);
        if (display_attack == NULL)
            return (NULL);
        if (!check_position(display_attack))
            my_putstr("wrong position\n");
        else
            break;
    }
    return (display_attack);
}

int player_turn(int pid_enemy, int **save)
{
    char *direction;

    direction = print_attack();
    if (direction == NULL)
        return (-1);
    my_putstr(direction);
    my_putstr(": ");
    usleep(5000);
    output_moves(pid_enemy, direction[0] - 'A');
    output_moves(pid_enemy, direction[1] - '1');
    pause();
    if (create_bytes(-1) == 0) {
        save[direction[1] - '1'][direction[0] - 'A'] = 2;
        my_putstr("missed\n\n");
    } else {
        save[direction[1] - '1'][direction[0] - 'A'] = 1;
        my_putstr("hit\n\n");
    }
    free(direction);
    return (0);
}

int enemy_input(int pid_enemy, int **map)
{
    char *direction;

    my_putstr("waiting for enemy's attack...\n");
    direction = get_coord();
    my_putstr(direction);
    my_putstr(": ");
    usleep(5000);
    if (save_hit(direction, map) == 0) {
        kill(pid_enemy, SIGUSR1);
        my_putstr("missed\n\n");
    } else {
        kill(pid_enemy, SIGUSR2);
        my_putstr("hit\n\n");
    }
    free(direction);
    return (0);
}

int navy_algorithm(int id_user, int pid_enemy, int **map, int **save)
{
    int player_return = 0;
    int og_id = id_user;

    if (update_signal(catch_move) == NULL)
        return (FAILURE);
    my_putchar('\n');
    for (; check_victory(map, pid_enemy, id_user) == 0;){
        if (id_user == og_id)
            display_user1_2_map(map, save);
        if (id_user == 0)
            player_return = player_turn(pid_enemy, save);
        else
            player_return = enemy_input(pid_enemy, map);
        if (player_return == -1)
            return (0);
        id_user = (id_user == 0) ? 1 : 0;
    }
    display_user1_2_map(map, save);
    my_putstr((id_user == 1) ? "I won\n" : "Enemy won\n");
    return (0);
}
