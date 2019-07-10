/*
** EPITECH PROJECT, 2019
** myfc
** File description:
** 2018
*/

#ifndef MYFC_H_
#define MYFC_H_

//~ Library prototype ~//

int my_strlen(char const *);
char *my_strncat(char *, char *, int);
int	my_strncmp(char *, char *, int);
char *my_strncpy(char *, char *, int);
char **str_to_wordtab(char *, char, char **);
char *my_strcat(char *dest, char *src);

//~ Functions printing on standar output ~//

int my_printf(char *s, ...);
void my_putchar(char);
int my_put_nbr(int);
int my_putstr(char const *);

//~ Functions printing on error output ~//

int my_printerr(char *s, ...);
int my_put_nbr_err(int nb);
void my_puterr(char c);
int my_putstderr(char const *str);

#endif /* !MYFC_H_ */
