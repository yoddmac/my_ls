/*
** EPITECH PROJECT, 2019
** disp
** File description:
** disp
*/

#include <stdarg.h>
#include "include/my.h"

void my_put_nbr_hexa(va_list ap)
{
    int nb = va_arg(ap, int);
    my_putnbr_hex(nb);
}

void my_put_nbr_capitahex(va_list ap)
{
    int nb = va_arg(ap, int);
    my_putnbr_capit_hex(nb);
}

void my_put_nbr_oct(va_list ap)
{
    int nb = va_arg(ap, int);
    my_putnbr_oct(nb);
}

void my_put_pourcent(va_list ap)
{
    my_putchar('%');
}

void my_put_point(va_list ap)
{
    my_putstr("0x");
    long int nb = va_arg(ap, long int);
    my_putnbr_point(nb);
}