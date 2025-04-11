NAME=libft.a

CC = cc

FLAG = -Wall -Wextra -Werror

RM = rm -fr

SRC =					ft_atoi.c ft_itoa_base.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_print_hexa.c ft_printf.c ft_print_pointer.c

OBJS = $(SRC:.c=.o)

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

.c.o:
	$(CC) $(FLAG) -c $< -o $(<:.c=.o)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
