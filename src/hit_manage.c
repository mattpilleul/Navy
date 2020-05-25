/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

int save_hit(char *direction, int **map)
{
    int pos_x = direction[1] - '1';
    int pos_y = direction[0] - 'A';

    if (map[pos_x][pos_y] == 1)
        return (0);
    if (map[pos_x][pos_y] < 2) {
        map[pos_x][pos_y] = 0;
        return (0);
    } else {
        map[pos_x][pos_y] = 1;
        return (1);
    }
    return (0);
}
