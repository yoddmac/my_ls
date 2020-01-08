/*
** EPITECH PROJECT, 2019
** disp
** File description:
** disp
*/

#ifndef MY_H_
#define MY_H_

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <pwd.h>
#include <grp.h>
#include <dirent.h>
#include <sys/types.h>
#include <time.h>

void my_ls(void);
void my_ls_d(void);
void init_ls_l(void);
void my_ls_l(void);
void my_acl(struct dirent *dirent, struct stat stats);
void info(void);
void display_block(void);
int my_strcmp(char const *s1, char const *s2);
struct stat stats;
struct dirent *dirent;
struct passwd *pass;
struct group *grp;

int my_putnbr_unisigned(unsigned int nb);
int my_putnbr_no_p(int nb);
int my_putnbr_bin(int nb);
int my_putnbr_hex(int nb);
int my_putnbr_capit_hex(int nb);
int my_putnbr_oct(int nb);
int my_putnbr_point(long int p);
int my_strlen(char const *str);
int my_putstr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
void print_char(va_list ap);
void print_string(va_list ap);
void print_nbr(va_list ap);
void print_nbr_i(va_list ap);
void my_put_nbr_binaire(va_list ap);
void my_put_nbr_hexa(va_list ap);
void my_put_nbr_capitahex(va_list ap);
void my_put_nbr_oct(va_list ap);
void my_put_pourcent(va_list ap);
void my_put_point(va_list ap);
void my_putnbr_no_print(va_list ap);
void my_putnbr_un(va_list ap);
int my_printf(char const *str, ...);

typedef struct flag_s{
    char flags;
    void (*ptr_flags)(va_list);
} flag_t;

static const flag_t tab[] = {
    {'c', &print_char},
    {'s', &print_string},
    {'d', &print_nbr},
    {'i', &print_nbr_i},
    {'b', &my_put_nbr_binaire},
    {'x', &my_put_nbr_hexa},
    {'X', &my_put_nbr_capitahex},
    {'o', &my_put_nbr_oct},
    {'%', &my_put_pourcent},
    {'p', &my_put_point},
    {'S', &my_putnbr_no_print},
    {'u', &my_putnbr_un},
    {'\0', NULL}
};

#endif