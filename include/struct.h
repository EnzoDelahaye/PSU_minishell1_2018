/*
** EPITECH PROJECT, 2019
** struct
** File description:
** 2018
*/

#ifndef STRUCT_H_
#define STRUCT_H_

//~ Main shell's structure ~//

typedef struct s_shell
{
    char **my_path;
    char **env;
    int fd;
    char *command;
    char **arg;
    pid_t pid;
    char *concat;
    int state;
    int error;
}shell_t;

#endif /* !STRUCT_H_ */
