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

int connect_users(int ac, char **av)
{
    int sig_value = 0;
    int pid = getpid();

    my_printf("my_pid: %i\n", pid);
    if (ac == 2) {
        my_putstr("waiting for enemy connection...\n\n");
        sig_value = get_connection(0);
    } else
        sig_value = get_connection(my_getnbr(av[1]));
    return (sig_value);
}
