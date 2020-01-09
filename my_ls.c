/*
** EPITECH PROJECT, 2020
** l
** File description:
** lq
*/

#include "lib/my/include/my.h"

void my_ls(char *path)
{
    DIR *rep = opendir (path);
    while ((dirent = readdir(rep))) {
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

void my_ls_l(void)
{
    DIR *rep = opendir(".");
    pass = getpwuid(stats.st_uid);
    grp = getgrgid(stats.st_uid);
    dirent = readdir(rep);
    stat(dirent->d_name, &stats);

    display_block();
    my_putchar('\n');
    while ((dirent = readdir(rep)) != NULL) {
        if (my_strcmp(dirent->d_name, ".") != 0 &&
            my_strcmp(dirent->d_name, "..")
            != 0 && my_strcmp(dirent->d_name, ".git") != 0) {
            my_acl(dirent, stats);
            info();
        }
    }
    closedir(rep);
}

void my_acl(struct dirent *dirent, struct stat stats)
{
    stat(dirent->d_name, &stats);
    my_putstr((S_ISDIR(stats.st_mode)) ? "d" : "-");
    my_printf((stats.st_mode & S_IRUSR) ? "r" : "-");
    my_printf((stats.st_mode & S_IWUSR) ? "x" : "-");
    my_printf((stats.st_mode & S_IXUSR) ? "w" : "-");
    my_printf((stats.st_mode & S_IRGRP) ? "x" : "-");
    my_printf((stats.st_mode & S_IWGRP) ? "w" : "-");
    my_printf((stats.st_mode & S_IXGRP) ? "x" : "-");
    my_printf((stats.st_mode & S_IROTH) ? "r" : "-");
    my_printf((stats.st_mode & S_IWOTH) ? "w" : "-");
    my_printf((stats.st_mode & S_IXOTH) ? "x" : "-");
}

void info(void)
{
    pass = malloc(sizeof(struct passwd));
    pass = getpwuid(stats.st_uid);
    grp = getgrgid(stats.st_gid);
    stat(dirent->d_name, &stats);

    my_putstr(" ");
    my_put_nbr(stats.st_nlink);
    my_putstr(" ");
    my_printf("%s", pass->pw_name);
    my_putstr(" ");
    my_printf("%s", grp->gr_name);
    my_putstr(" ");
    my_put_nbr(stats.st_size);
    my_putstr(" ");
    my_puttime();
    my_putstr(" ");
    my_putstr(dirent->d_name);
    my_putstr("\n");
}

void display_block(void)
{
    DIR *dir;
    int block = 0;

    dir = opendir(".");
    if (dir != NULL) {
        while ((dirent = readdir(dir)) != NULL) {
            if ((*dirent->d_name) == '.') {
            } else {
                stat(dirent->d_name, &stats);
                block += stats.st_blocks;
            }
        }
    }
    my_putstr("total ");
    my_put_nbr(block );
}

int main (int ac, char **av)
{

    //if (ac == 1)
        my_ls(av[1]);
    if ((ac == 2 && my_strcmp(av[1], "-l") == 0))
        my_ls_l();
    if ((ac == 2 && my_strcmp(av[1], "-d") == 0))
        my_ls_d();
}