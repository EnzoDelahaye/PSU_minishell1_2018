/*
** EPITECH PROJECT, 2019
** str to ward tab
** File description:
** 2018
*/

#include "mysh.h"

int count_word(char *str, char charact)
{
    int i = 0;
    int n = 0;

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == charact && str[i + 1] != '\0')
            n++;
        i++;
    }
    return (n);
}

int count_char(char *str, char charact)
{
    int c = 0;

    while ((str[c] != charact) && (str[c] != '\0') && (str[c] != '\n')) c++;
    c++;
    return (c);
}

char **str_to_wordtab(char *str, char charact, char **tab)
{
    int i = 0;
    int b = 0;
    int a = 0;

    tab = malloc(sizeof(*tab) * ((count_word(str, charact) + 1)));
    if (tab == NULL) exit (84);
    while (str[i] != '\t' && str[i] != '\0') {
        if (str[i] == charact || str[i] == '\n') {
            while (str[i] == charact) i++;
            a++;
            b = 0;
        }
        tab[a] = malloc(sizeof(**tab) * ((count_char(str + i, charact) + 1)));
        if (tab[a] == NULL) exit (84);
        while ((str[i] != charact)  && (str[i] != '\n') && (str[i] != '\0'))
            tab[a][b++] = str[i++];
        tab[a][b] = '\0';
    } tab[a + 1] = 0;
    return (tab);
}