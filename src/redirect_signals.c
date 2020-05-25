/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include <stdlib.h>
#include <signal.h>
#include "../include/my.h"
#include "../include/navy.h"

#define _XOPEN_SOURCE 700

void *update_signal(void (*signal)(int, siginfo_t *, void *))
{
    int player_signal[2] = {SIGUSR1, SIGUSR2};
    struct sigaction new_input;
    int i = 0;

    new_input.sa_flags = SA_SIGINFO;
    new_input.sa_sigaction = signal;
    sigemptyset(&new_input.sa_mask);
    while (i < 2) {
        if (sigaction(player_signal[i], &new_input, NULL) == -1)
            return (0);
        i++;
    }
    return ((void *) 1);
}