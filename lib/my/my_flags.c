/*
** EPITECH PROJECT, 2019
** disp
** File description:
** disp
*/

#include <stdarg.h>
#include "include/my.h"

void print_char(va_list ap)
{
    char c = va_arg(ap, int);
    my_putchar(c);
}

void print_string(va_list ap)
{
    char *str = va_arg(ap, char *);
    my_putstr(str);
}

void print_nbr(va_list ap)
{
    int nb = va_arg(ap, int);
    my_put_nbr(nb);
}

void print_nbr_i(va_list ap)
{
    int nb = va_arg(ap, int);
    my_put_nbr(nb);
}

void my_put_nbr_binaire(va_list ap)
{
    int nb = va_arg(ap, int);
    my_putnbr_bin(nb);
}
