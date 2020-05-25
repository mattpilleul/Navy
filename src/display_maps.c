/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include "../include/my.h"
#include "../include/navy.h"

#define FST_ROW " |A B C D E F G H\n"
#define SCD_ROW "-+---------------\n"

int init_map(int start, const int *position_nb,
const char *position_elem)
{
    int i = 0;

    while (i < 7) {
        if (start == position_nb[i])
            return (position_elem[i]);
        i++;
    }
    return (0);
}

void display_row(int **map, const int *position_nb,
const char *position_elem, int i)
{
    int j = 0;

    while (j < 8) {
        my_putchar(init_map(map[i][j], position_nb, position_elem));
        if (j < 7)
            my_putchar(' ');
        j++;
    }
}

void show_map(int **map, const int *position_nb,
const char *position_elem)
{
    int i = 0;

    my_putstr(FST_ROW);
    my_putstr(SCD_ROW);
    while (i < 8) {
        my_printf("%c|", '1' + i);
        display_row(map, position_nb, position_elem, i);
        my_putchar('\n');
        i++;
    }
    my_putchar('\n');
}

void display_user1_2_map(int **map, int **history)
{
    my_putstr("my positions:");
    my_putchar('\n');
    show_map(map, pos_nbr, position_elements);
    my_putstr("enemy's positions:");
    my_putchar('\n');
    show_map(history, enemy_pos_nbr, enemy_position_elements);
}
