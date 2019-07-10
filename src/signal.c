/*
** EPITECH PROJECT, 2019
** signal
** File description:
** 2018
*/

#include "mysh.h"

void my_check(int c)
{
    (void)c;

    my_printf("\033[1;31m");
    my_printf("\n->");
    my_printf("\033[1;0m");
}

void my_signal(void)
{
    if (signal(SIGINT, my_check) == SIG_ERR)
        my_printf("SIGINT Problem\n");
}

void my_prompt(char **env)
{
    char *user = get_user(env);

    my_printf("\033[1m\033[36m(%s\033[32m $>)\033[0m ", user);
}