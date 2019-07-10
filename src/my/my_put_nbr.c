/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** 2018
*/

#include "mysh.h"

int my_put_nbr_err(int nb)
{
    int	rest;

    if (nb < 0) {
        my_puterr(45);
        nb = nb * (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            rest = (nb % 10);
            nb = (nb - rest) / 10;
            my_put_nbr_err(nb);
            my_puterr(48 + rest);
        } else
            my_puterr(48 + nb % 10);
    } return (0);
}

int my_put_nbr(int nb)
{
    int	rest;

    if (nb < 0) {
        my_putchar(45);
        nb = nb * (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            rest = (nb % 10);
            nb = (nb - rest) / 10;
            my_put_nbr(nb);
            my_putchar(48 + rest);
        } else
            my_putchar(48 + nb % 10);
    } return (0);
}