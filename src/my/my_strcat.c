/*
** EPITECH PROJECT, 2019
** mystrcat
** File description:
** adding slash between 2 string
*/

#include "mysh.h"

char *my_strnlast(char *dest, int nb)
{
    char *str = malloc(sizeof(char) * 50);
    int i = 0;

    while (dest[nb]) {
        str[i] = dest[nb];
        nb++;
        i++;
    }
    return (str);
}

char *my_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;
    char *str = malloc(sizeof(str) * (my_strlen(dest) + my_strlen(src) + 1));

    while (dest[i] != '\0') {
        str[i] = dest[i];
        i++;
    }
    str[i++] = '/';
    while (src[j] != '\0')
        str[i++] = src[j++];
    str[i] = '\0';
    return (str);
}

