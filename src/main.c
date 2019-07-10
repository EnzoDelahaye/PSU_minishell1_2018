/*
** EPITECH PROJECT, 2019
** main
** File description:
** 2018
*/

#include "mysh.h"

char *get_user(char **env)
{
    char *str;
    int i = 0;

    while (env[i]) {
        if (my_strncmp(env[i], "USER", 4) == 0)
            str = my_strnlast(env[i], 5);
        i++;
    } return (str);
}

int main(int ac, char **av, char **env)
{
    shell_t shell;
    char **tab = NULL;
    char **arg = NULL;

    if (ac != 1) return (84);
    else if (env[0] == NULL) return (84);
    else {
        shell.env = env;
        shell.my_path = my_env(env, tab);
        my_prompt(env);
        if (my_read_loop(env, shell, arg) != 0)
            return (84);
    }
    free(tab);
    free(arg);
    return (0);
}
