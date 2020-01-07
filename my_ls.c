/*
** EPITECH PROJECT, 2020
** l
** File description:
** lq
*/

#include "lib/my/my.h"
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <time.h>

void my_ls(DIR *dir)
{
    DIR *rep = opendir (".");

    while ((dirent = readdir(dir)) != 0) {
    if (dirent->d_name != rep)
    my_printf("%s\n", dirent->d_name);
    }
}

void my_ls_l(DIR *dir)
{
    my_putchar(sb.st_mode & S_IFMT);
    my_printf((sb.st_mode & S_IRUSR) ? "r" : "-");
    my_printf((sb.st_mode & S_IWUSR) ? "x" : "-");
    my_printf((sb.st_mode & S_IXUSR) ? "w" : "-");
    my_printf((sb.st_mode & S_IRGRP) ? "x" : "-");
    my_printf((sb.st_mode & S_IWGRP) ? "w" : "-");
    my_printf((sb.st_mode & S_IXGRP) ? "x" : "-");
    my_printf((sb.st_mode & S_IROTH) ? "r" : "-");
    my_printf((sb.st_mode & S_IWOTH) ? "w" : "-");
    my_printf((sb.st_mode & S_IXOTH) ? "x" : "-");
}

int main (int ac, char **av)
{
    DIR *rep = opendir (".");

    if (ac == 1)
        my_ls(rep);
    if (ac == 2 && my_strcmp(av, "-l"))
        my_ls_l(rep);
}