/*
** EPITECH PROJECT, 2019
** lib
** File description:
** my_getnbr
*/

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}
