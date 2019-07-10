/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** 2018
*/

#include "mysh.h"

int my_printerr(char *s, ...)
{
    va_list ap;
    va_start (ap, s);
    int index = 0;

    while (s[index] != '\0') {
        if (s[index] != '%') my_puterr(s[index]);
        if (s[index] == '%') {
            index++;
            if (s[index] == 'c') my_puterr(va_arg(ap, int));
            if (s[index] == 's') my_putstderr(va_arg(ap, char *));
            if (s[index] == 'i' || s[index] == 'd')
                my_put_nbr_err(va_arg(ap, int));
        }
        index++;
    }
    va_end (ap);
    return (0);
}

int my_printf(char *s, ...)
{
    va_list ap;
    va_start (ap, s);
    int index = 0;

    while (s[index] != '\0') {
        if (s[index] != '%') my_putchar(s[index]);
        if (s[index] == '%') {
            index++;
            if (s[index] == 'c') my_putchar(va_arg(ap, int));
            if (s[index] == 's') my_putstr(va_arg(ap, char *));
            if (s[index] == 'i' || s[index] == 'd')
                my_put_nbr(va_arg(ap, int));
        }
        index++;
    }
    va_end (ap);
    return (0);
}