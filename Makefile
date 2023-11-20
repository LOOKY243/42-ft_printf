CC=clang
NAME = libftprintf.a
SRCS = ft_printf.c ft_int_funct.c ft_char_funct.c 
HEADER = ft_printf.h
OBJS = $(SRCS:.c=.o)
CFLAGS = -Werror -Wall -Wextra

all:$(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) $< -c -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJS)

re: fclean all

.PHONY: all fclean clean run re
