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

int tranfer_epid(int pid)
{
    static int pid_enemy = 0;

    if (pid == -1)
        return (pid_enemy);
    else
        pid_enemy = pid;
    return (0);
}

void catch_signal(int sig, siginfo_t *siginfo, void *ucontext)
{
    int pid_catch = siginfo->si_pid;

    (void) sig;
    (void) ucontext;
    tranfer_epid(pid_catch);
}

int get_connection(pid_t pid)
{
    int pid_enemy = 0;

    if (update_signal(catch_signal) == NULL)
        return (-1);
    if (pid != 0) {
        usleep(5000);
        if (kill(pid, SIGUSR1) == -1)
            return (-1);
        pause();
        pid_enemy = tranfer_epid(-1);
        my_putstr("successfully connected\n");
    } else {
        pause();
        pid_enemy = tranfer_epid(-1);
        usleep(5000);
        if (kill(pid_enemy, SIGUSR1) == -1)
            return (-1);
        my_putstr("enemy connected\n");
    }
    return (pid_enemy);
}