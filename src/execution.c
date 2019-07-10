/*
** EPITECH PROJECT, 2019
** execution
** File description:
** 2018
*/

#include "mysh.h"

int check_command(shell_t *shell, char **env)
{
    if (my_strncmp(shell->arg[0], "exit", my_strlen(shell->arg[0])) == 0)
        exit(my_printf("exit\n") + 0);
    else if (my_strncmp(shell->arg[0], "env", my_strlen(shell->arg[0]))
    == 0)
        return (0 + disp_env(&shell, env));
    else if (my_strncmp("cd", shell->arg[0], my_strlen(shell->arg[0]))
    == 0)
        return (0 + change_dir(&shell, env));
    else if (my_strncmp("setenv", shell->arg[0], my_strlen(shell->arg[0]))
    == 0)
        return (0 + builtin_setenv(&shell));
    else if (my_strncmp("unsetenv", shell->arg[0], my_strlen(shell->arg[0]))
    == 0)
        return (0 + builtin_unsetenv(&shell));
    else {
        shell->error = 0;
        return (0);
    }
}

int change_dir(shell_t **shell, char **env)
{
    char *str = malloc(sizeof(char) * my_strlen((*shell)->arg[1]) + 1);
    int i = 0;
    extern int errno;

    (*shell)->error = 1;
    if (!str) return (84);
    while ((*shell)->arg[1][i] != 0) {
        str[i] = (*shell)->arg[1][i];
        i++;
    }
    if (my_strncmp(str, "~", my_strlen((*shell)->arg[1])) == 0)
        chdir(my_get_home(env));
    else {
        if (chdir(str) != 0) {
            my_printerr("%s: %s\n", (*shell)->arg[1], strerror(errno));
        }
    }
    free(str);
    return (0);
}

int exec_prgm(shell_t shell, char **env)
{
    if (my_strncmp(shell.command, "./", 2) == 0) {
        if (execve(shell.arg[0], shell.arg, shell.env) < 0) {
            return (1);
        }
        return (0);
    }
    return (4);
}

int exec_cmd(shell_t shell, char **env, int path_arg)
{
    int i;

    i = execve(shell.concat, shell.arg, shell.env);

    if (i < 0 || path_arg >= 7) {
        return (1);
    } else
        return (0);
}
