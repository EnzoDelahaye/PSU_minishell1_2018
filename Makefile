##
## EPITECH PROJECT, 2019
## makefile
## File description:
## 2018
##

NAME	= mysh

CC	= gcc

RM	= rm -f

SRCS	= ./src/main.c \
	  ./src/shell.c \
	  ./src/convert_arg.c \
	  ./src/execution.c \
	  ./src/env_implement.c \
	  ./src/signal.c \
	  ./src/get_env_variable.c \
	  ./src/lineformatting.c \
	  ./src/my/my_printf.c \
	  ./src/my/my_put_nbr.c \
	  ./src/my/my_putchar.c \
	  ./src/my/my_putstr.c \
	  ./src/my/my_strlen.c \
	  ./src/my/my_strncat.c \
	  ./src/my/my_strncmp.c \
	  ./src/my/my_str_to_wordtab.c \
	  ./src/my/my_strcat.c \
	  ./src/my/get_next_line.c \

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
