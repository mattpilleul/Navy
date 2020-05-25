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

char **get_file(char const *filename)
{
    int fd;
    int size = 400;
    int size_2 = 0;
    char buff[400];
    char **space;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (NULL);
    size_2 = read(fd, buff, size);
    buff[size_2] = '\0';
    close(fd);
    space = my_str_to_word_array(buff, "\n");
    if (length_error(space) == FAILURE)
        return (NULL);
    if (error_position(space) == 1)
        return (NULL);
    return (space);
}

char ***get_position_file(char *filename)
{
    char ***navy = malloc(sizeof(char **) * 4);
    char **space;
    int i = 0;

    if ((space = get_file(filename)) == NULL)
        return (NULL);
    while (i < 4){
        navy[i] = my_str_to_word_array(space[i], ":");
        i++;
    }
    return (navy);
}
