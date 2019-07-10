/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** counts return character
*/

#include "mysh.h"

int my_strlen(char const *str)
{
    int i;

    i = 0;
    while (str [i] != '\0') {
        i++;
    }

    return (i);
}
