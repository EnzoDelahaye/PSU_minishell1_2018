/*
** EPITECH PROJECT, 2019
** shell
** File description:
** 2018
*/

#include "mysh.h"

void my_shell(shell_t shell, char **env)
{
    int i = 0;
    extern int errno;

    if (shell.pid == 0 && shell.command[0] != 0 && shell.error != 1) {
        while (shell.my_path[i] != 0) {
            shell.concat = my_strcat(shell.my_path[i], shell.arg[0]);
            exec_cmd(shell, env, i), exec_prgm(shell, env);
                if (shell.my_path[i + 1] == 0) {
                my_printerr("%s: Command not found.\n",
                shell.arg[0]);
                exit(1);
            }
            i++;
        }
        free(shell.arg);
        exit (0);
    }
    else if (shell.pid != 0)
        wait(&shell.state);
}

int my_read_loop(char **env, shell_t shell, char **arg)
{
    while (1) {
        shell.command = get_next_line(0);
        shell.command = lineformating(shell.command);
        shell.arg = convert_arg(shell.command, arg);
        check_command(&shell, env);
        if (shell.command[0] != '\0' && shell.error != 1)
            shell.pid = fork();
        if (shell.pid == -1)
            exit(0);
        my_shell(shell, env);
        my_prompt(env);
        my_signal();
        free(shell.command);
    }
    close(shell.fd);
    return (0);
}