/*
** EPITECH PROJECT, 2018
** my_putchar
** File description:
** display characters of a string
*/

#include "mysh.h"

void my_puterr(char c)
{
    write(2, &c, 1);
}

void my_putchar(char c)
{
    write(1, &c, 1);
}