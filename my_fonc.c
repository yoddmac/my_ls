/*
** EPITECH PROJECT, 2020
** l
** File description:
** lq
*/

#include "lib/my/include/my.h"

void my_ls(void)
{
    DIR *rep = opendir (".");
    while ((dirent = readdir(rep)) != NULL) {
        if (my_strcmp(dirent->d_name, ".") != 0
            && my_strcmp(dirent->d_name, "..")
            != 0 && my_strcmp(dirent->d_name, ".git") != 0)
            my_printf("%s\n", dirent->d_name);
    }
    closedir(rep);
}

void my_ls_in(char const **av)
{
    DIR *rep = opendir (av[1]);
    while ((dirent = readdir(rep)) != NULL) {
        if (my_strcmp(dirent->d_name, ".") != 0
            && my_strcmp(dirent->d_name, "..")
            != 0 && my_strcmp(dirent->d_name, ".git") != 0)
            my_printf("%s\n", dirent->d_name);
    }
    closedir(rep);
}

void my_ls_d(void)
{
    my_putchar('.');
}