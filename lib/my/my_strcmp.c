/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int cmpy;

    while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0')) {
        i++;
    }
    cmpy = s1[i] - s2[i];
    return (cmpy);
}