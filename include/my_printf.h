/*
** EPITECH PROJECT, 2019
** my_printf.h
** File description:
** my
*/

#ifndef MY
#define MY

#include <stdarg.h>

void no_print_str(char *src);
void double_char(char **str);
char *my_put_nbr_hex_min(unsigned int nb);
void unsigned_int(unsigned int nb);
char *my_put_nbr_bin(unsigned int nb);
char *my_put_hex_maj(unsigned int nb);
char *my_put_hex_min(unsigned int nb);
char *my_put_nbr_oct(unsigned int nb);
void my_putchar (char c);
void my_put_nbr(int nb, int x);
int my_putstr(char const *str);
char *my_str_checker(char *str, char *checker);
int my_strlen(char const *str);
char *my_revstr(char *str);
int size_nbr(int nb);
void manage_hash(char *str, int *i);
void manage_space(char *str, int *i);
void show_arguments(char *str, int i, va_list ap);
void special_case(char *str, int* i, va_list ap);
void show_base(char *str, int* i, va_list ap);
int my_printf(char *format, ...);

#endif