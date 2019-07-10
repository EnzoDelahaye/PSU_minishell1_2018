/*
** EPITECH PROJECT, 2019
** getenvvaraible
** File description:
** 2018
*/

#include "mysh.h"

char *my_get_home(char **env)
{
    char *str;
    int i = 0;

    while (env[i]) {
        if (my_strncmp(env[i], "HOME", 4) == 0)
            str = my_strnlast(env[i], 5);
        i++;
    } return (str);
}

char **my_env(char **env, char **tab)
{
    char **str;
    int i = 0;

    while (env[i]) {
        if (my_strncmp(env[i], "PATH", 4) == 0)
            str = str_to_wordtab(env[i], ':', tab);
        i++;
    }
    return (str);
}