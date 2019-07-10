/*
** EPITECH PROJECT, 2019
** env_implement
** File description:
** 2018
*/

#include "mysh.h"

char *get_variable(shell_t ***shell, char *str)
{
    int j = 0;
    int k = 0;
    int ok = 0;

    while (ok != 1) {
        while ((**shell)->arg[1][j] != 0) {
            str[j] = (**shell)->arg[1][j];
            j++;
        } str[j++] = '=';
        while ((**shell)->arg[2][k] != 0) {
            str[j] = (**shell)->arg[2][k];
            k++;
            j++;
        }
        ok = 1;
    } return (str);
}

int builtin_setenv(shell_t **shell)
{
    (*shell)->error = 1;

    return (0);
}

int builtin_unsetenv(shell_t **shell)
{
    (*shell)->error = 1;

    return (0);
}

int disp_env(shell_t **shell, char **env)
{
    int i = 0;

    (*shell)->error = 1;
    while ((*shell)->env[i] != NULL) {
        my_printf("%s\n", (*shell)->env[i]);
        i++;
    }
    return (0);
}