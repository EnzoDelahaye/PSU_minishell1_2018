/*
** EPITECH PROJECT, 2019
** convert_arg
** File description:
** 2018
*/

#include "mysh.h"

int countword(char *str)
{
    int i = 0;
    int n = 0;

    while (str[i] != '\0' && str[i] != '\n') {
        if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] != '\0')
            n++;
        i++;
    }
    return (n);
}

int countchar(char *str)
{
    int c = 0;

    while ((str[c] != ' ') && (str[c] != '\0') && (str[c] != '\n') &&
    (str[c] != '\t')) c++;
    c++;
    return (c);
}

char **malloc_arg(char **arg, char *exec)
{
    int line = 0;

    arg = malloc(sizeof(*arg) * ((countword(exec) + 2)));
    if (arg == NULL) exit (84);
    while (line < ((countword(exec) + 1))) {
        arg[line] = malloc(sizeof(**arg) * ((countchar(exec) + 2)));
        if (arg[line] == NULL) exit (84);
        line++;
    }
    return (arg);
}

char **convert_arg(char *exec, char **arg)
{
    int i = 0;
    int j = 0;
    int k = 0;

    if (exec == NULL) exit(0);
    arg = malloc_arg(arg, exec);
    while (exec[k] != 0) {
        if (exec[k] == ' ' || exec[k] == '\t') {
            i = -1;
            j++;
        }
        arg[j][i] = exec[k];
        k++;
        i++;
    }
    arg[j + 1] = NULL;
    return (arg);
}