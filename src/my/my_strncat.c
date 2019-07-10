/*
** EPITECH PROJECT, 2018
** my_strncat
** File description:
** 2018
*/

#include "mysh.h"

char *my_strncat(char *dest, char *src, int nb)
{
    int len;
    int i = 0;

    len = my_strlen(dest);
    while (i < nb && src[i]) {
        dest[len + i] = src[i];
        i = i + 1;
    }
    dest[len + i] = '\0';
    return (dest);
}