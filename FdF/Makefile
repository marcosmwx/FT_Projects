NAME=	fdf

IMPORTS=	imports/
LIBFT_PATH=	$(IMPORTS)libft/
MINILIB_PATH= $(IMPORTS)minilibx-linux/

LIBFT_A=	$(LIBFT_PATH)libft.a
MINILIB_A= 	$(MINILIB_PATH)libmlx.a

CC=		cc
CFLAGS=	-g -Wall -Werror -Wextra
INCLUDE= includes

SRCS=	fdf.c \
		src/free/free_data.c \
		src/free/free_resources.c \
		src/free/free_pointer_server.c \
		src/free/clear_image.c \
		src/hooks/key_hook.c \
		src/hooks/pack_hooks.c \
		src/map/read_file.c \
		src/map/read_file_utils.c \
		src/graph/draw_trace_lines.c \
		src/graph/draw_utils.c \
		src/graph/draw.c



OBJS=	$(SRCS:.c=.o)

all: $(LIBFT_A) $(NAME)

$(LIBFT_A):
	make -C $(LIBFT_PATH)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -L $(LIBFT_PATH) -lft -L $(MINILIB_PATH) -lmlx -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	rm -f $(OBJS)
	make clean -C $(LIBFT_PATH)

fclean: clean
	make fclean -C $(LIBFT_PATH)
	rm -rf $(NAME)

r: all
	clear
	./$(NAME) ./test_maps/42.fdf

c: fclean $(NAME)
