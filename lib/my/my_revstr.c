/*
** EPITECH PROJECT, 2019
** disp
** File description:
** disp
*/

char *my_revstr(char *str)
{
    int cpt = 0;
    int i = 0;
    char stock;

    while (str[cpt] != '\0')
        cpt++;
    cpt--;
    while (cpt > i) {
        stock = str[cpt];
        str[cpt] = str[i];
        str[i] = stock;
        cpt--;
        i++;
    }
    return (str);
}