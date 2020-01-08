/*
** EPITECH PROJECT, 2019
** disp
** File description:
** disp
*/

#include "include/my.h"

int my_putnbr_no_p(int nb)
{
    int r = 0;

    if (nb >= 8) {
        r = nb % 8;
        nb = nb / 8;
        my_putnbr_no_p(nb);
    }
    else if (nb > 0) {
        r = nb % 8;
        nb = nb / 8;
    }
    if (r >= 127 || r < 32) {
        my_putchar('/');
        my_putchar('0');
    }
    return (r);
}

int my_putnbr_unisigned(unsigned int nb)
{
    unsigned int r = 0;

    if (nb >= 10) {
        r = nb % 10;
        nb = nb / 10;
        my_putnbr_unisigned(nb);
        my_putchar(r + '0');
    }else
    my_putchar(nb + 48);
    return (r);
}

int parc_str(char *str)
{
    int i = 0;
    my_putchar('/');
    my_putchar('a');
    for (; str[i] != '\0'; i++)
    {
        my_putnbr_no_p(str[i]);
    }
    return (str[i]);
}