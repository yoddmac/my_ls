/*
** EPITECH PROJECT, 2019
** disp
** File description:
** disp
*/

#include "include/my.h"

int my_put_nbr(int nb)
{
    int i = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb > 9)
        my_put_nbr(nb / 10);
    i = nb % 10;
    my_putchar(i + '0');
    return (i);
}
