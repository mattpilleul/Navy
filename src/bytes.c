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

int create_bytes(int nbr)
{
    static int bytes = 0;

    if (nbr == -1) {
        return (bytes);
    } else {
        bytes = nbr;
    }
    return (0);
}

void catch_move(int sig, siginfo_t *siginfo, void *ucontext)
{
    (void) siginfo;
    (void) ucontext;
    if (sig == SIGUSR1)
        create_bytes(0);
    else if (sig == SIGUSR2)
        create_bytes(1);
}

int get_move(int nbr)
{
    int bytes;

    pause();
    bytes = create_bytes(-1);
    nbr =  nbr << 1;
    nbr += bytes;
    return (nbr);
}