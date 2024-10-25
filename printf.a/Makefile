SRC = ft_count.c  ft_hexa.c  ft_hexatwo.c  ft_pointer.c  ft_printf.c  ft_putchar.c  ft_putnbr.c ft_putstr.c  ft_unsigned.c

NAME = libftprintf.a
OBJS = ${SRC:.c=.o}
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
