NAME = so_long

SRCS =	main.c \
		parse_1.c \
		parse_2.c \
		parse_3.c \
		get_next_line.c \
		ft_utils.c \
		display.c \
		game.c \
		texture.c

SRCS_PATH = srcs/

OBJS = $(addprefix srcs/,$(SRCS:.c=.o))

CC = clang

CFLAGS = -Wall -Wextra -Werror

FT = -L libft -lft

MLX = -L minilibx-linux -lmlx -lX11 -lXext

RM = rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft/
	make -C minilibx-linux/
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(FT) $(MLX)

clean:
	$(RM) $(OBJS)
	make -C libft/ clean
	make -C minilibx-linux/ clean

fclean: clean
	$(RM) $(NAME)
	make -C libft/ fclean

re: fclean all