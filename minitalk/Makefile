NAME = minitalk.a
LIBFT_PATH= libft/
LIBFT_A = $(LIBFT_PATH)/libft.a
SRC = client.c server.c
OBJ = $(SRC:.c=.o)
FLAG = -Wall -Wextra -Werror
RM = rm -rf
CC = cc

all: $(NAME) server client

$(NAME): $(OBJ) $(LIBFT_A)
	ar -rc $(NAME) $(OBJ)

server: server.o $(LIBFT_A)
	$(CC) $(FLAG) -o server server.o $(LIBFT_A)

client: client.o $(LIBFT_A)
	$(CC) $(FLAG) -o client client.o $(LIBFT_A)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(LIBFT_A):
	make -C libft
clean:
	rm -f $(OBJ)
	make -C libft clean
	$(RM) $(OBJ)

fclean: clean
	make -C libft fclean
	$(RM) $(NAME) server client

re: fclean all

.PHONY: all clean fclean re
