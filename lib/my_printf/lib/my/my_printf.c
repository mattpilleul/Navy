/*
** EPITECH PROJECT, 2019
** printf.c
** File description:
** printf.c
*/

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "../include/my_printf.h"

int my_printf(char *format, ...)
{
    va_list ap;
    int i = 0;

    va_start(ap, format);
    if (my_str_checker(format, "%") == 0){
        write(1, format, my_strlen(format));
    } else {
        while (format[i] != '%') {
            my_putchar(format[i]);
            i++;
        }
        if (format[i + 1] == ' ')
            manage_space(format, &i);
        show_arguments(format, i, ap);
    }
    return (0);
}
