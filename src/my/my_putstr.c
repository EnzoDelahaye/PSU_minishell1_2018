/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** display characters of a string
*/

#include "mysh.h"

int my_putstderr(char const *str)
{
    int i;

    i = 0;
    while (str[i] !=  '\0') {
        my_puterr(str[i]);
        i++;
    }
    return (0);
}

int my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i] !=  '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}