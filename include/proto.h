/*
** EPITECH PROJECT, 2019
** proto
** File description:
** 2018
*/

#ifndef PROTO_H_
#define PROTO_H_

//~ All functions prototypes ~//

char *get_next_line(int fd);
void my_signal();
void my_prompt(char **env);
char *my_strnlast(char *dest, int nb);
void my_prompt();
int my_read_loop(char **env, shell_t shell, char **arg);
char **convert_arg(char *exec, char **arg);
void my_shell(shell_t shell, char **env);
char *lineformating(char *cmd);

//~ Execution function / cd builtin ~//

int check_command(shell_t *shell, char **env);
int change_dir(shell_t **shell, char **env);
int exec_prgm(shell_t shell, char **env);
int exec_cmd(shell_t shell, char **env, int path_arg);

//~ Env functions ~//

char **my_env(char **env, char **tab);
char *get_user(char **env);
char *my_get_home(char **env);
int disp_env(shell_t **shell, char **env);
int builtin_setenv(shell_t **shell);
int builtin_unsetenv(shell_t **shell);


#endif /* !PROTO_H_ */
