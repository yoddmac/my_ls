/*
** EPITECH PROJECT, 2020
** my_time
** File description:
** my_time
*/

#include "my.h"

int my_puttime(void)
{
	write(1, (ctime(&stats.st_mtime) + 4),
		(my_strlen(ctime(&stats.st_mtime)) - 13));
}