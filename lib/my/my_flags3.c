/*
** EPITECH PROJECT, 2019
** disp
** File description:
** disp
*/

#include <stdarg.h>
#include "include/my.h"

void my_putnbr_no_print(va_list ap)
{
    int nb = va_arg(ap, int);
    my_putnbr_no_p(nb);
}

void my_putnbr_un(va_list ap)
{
    unsigned int nb = va_arg(ap, unsigned int);
    my_putnbr_unisigned(nb);
}