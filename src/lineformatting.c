/*
** EPITECH PROJECT, 2019
** lineformating
** File description:
** 2018
*/

#include "mysh.h"

char *lineformating(char *cmd)
{
    char *formated = malloc(sizeof(char) * my_strlen(cmd));
    int i = 0;
    int k = 0;

    while (cmd[i] == '\t' || cmd[i] == ' ') i++;
    while (cmd[i]) {
        while (cmd[i] && cmd[i] != ' ' && cmd[i] != '\t')
            formated[k++] = cmd[i++];
        while (cmd[i] == ' ' || cmd[i] == '\t') i++;
        formated[k++] = ' ';
    }
    if (formated[k - 1] == ' ' || formated[k - 1] == '\t') formated[k - 1] = 0;
    return (formated);
}