/*
** EPITECH PROJECT, 2019
** lib
** File description:
** my_getnbr
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/my.h"
#include "../../include/navy.h"

char *manage_empty(char *str, char const *end_string)
{
    for (; !*str && str < end_string; str++);
    return (str);
}

void *complete_tab(char **tab, char *str, char const *end_string)
{
    for (; str < end_string;) {
        *tab = my_strdup(str);
        if (*tab == NULL)
            return (NULL);
        for (; *str;)
            str++;
        str = manage_empty(str, end_string);
        tab++;
    }
    *tab = NULL;
    return ((void *) 1);
}

char **my_str_to_word_array(char *src, const char *stop)
{
    char **tab;
    char const *end_string;
    char *str = my_strdup(src);

    if (str == NULL)
        return (NULL);
    end_string = str + my_strlen(str);
    for (; *stop;)
        clean_string(str, *stop++, end_string);
    tab = malloc(sizeof(char *) * (word_counter(str, end_string) + 1));
    if (complete_tab(tab, manage_empty(str, end_string), end_string) == NULL)
        return (NULL);
    if (tab == NULL)
        return (NULL);
    free(str);
    return (tab);
}
