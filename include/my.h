/*
** EPITECH PROJECT, 2020
** my
** File description:
** lib
*/

#pragma once

#include <stdio.h>

#define UNUSED(x)

int my_put_nbr(int nb);
int my_showstr(char const *str);
int my_getnbr(char const *str);
int check_first_char(int fd, char *character);
char *get_next_line(int fd);
int my_putchar(int c);
int my_strcmp(char *s1, char *s2);
int my_puts(const char *s);
void my_putstr(const char *s);
void clean_string(char *str, const char c, char const *end_string);
size_t word_counter(char *str, char const *end_string);
char **my_str_to_word_array(char *src, const char *stop);
char *my_strchr(char *s, int c);
char *my_strchrnull(char *s, int c);
char *my_strcpy(char *dest, const char *src);
char *my_strdup(const char *s);
int my_strlen(const char *s);
int my_printf(char *format, ...);