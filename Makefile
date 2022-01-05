
CC = gcc

NAME = libft_so_long.a

FLAGS = -Wall -Wextra -Werror

MLX = -Lminilibx -lmlx -framework OpenGL -framework AppKit

SRC = main.c ft_img.c ft_readmap.c ft_move.c ft_mapfunc.c \
	ft_exit.c ft_collected.c ft_map.c ft_mapchecker.c ft_syncmap.c \
	ft_trap.c ft_norm.c

LIBFT_PATH = ./utils
LIBX_PATH = ./minilibx

MAKE = make

all: $(NAME)

$(NAME): *.c
	$(MAKE) -C ./minilibx
	$(MAKE) -C ./utils
	cp ./utils/libft.a $(NAME)
	$(CC) $(FLAGS) -c $(SRC)
	ar rc $(NAME) *.o
	$(CC) $(FLAGS) -L. -lft_so_long ./minilibx/libmlx.a $(MLX) -lz -o so_long

clean:
	rm -f *.o
	rm -f *.out
	$(MAKE) clean -C $(LIBFT_PATH)
	$(MAKE) clean -C $(LIBX_PATH)
	

fclean: clean
	rm -f $(NAME)
	rm -f so_long
	$(MAKE) fclean -C $(LIBFT_PATH)

re: fclean all
