CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR      = ar rcs

NAME = libftprintf.a

SRCS =  src/ft_printf.c \
		src/ft_putnbr.c \
		src/print_hex.c \
		src/ft_print_adress.c \
		src/ft_putchar.c \
		src/ft_putstr.c \
		src/print_unsigned.c \

INCLUDES = ./include/*

OBJS = $(SRCS:.c=.o)

%.o:%.c ./include/*
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJS) 
	$(AR) $(NAME)  $?

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
