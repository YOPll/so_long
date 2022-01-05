
CC = gcc

NAME = libft_so_long.a

FLAGS = -Wall -Wextra -Werror

MLX = -Lminilibx -lmlx -framework OpenGL -framework AppKit

SRC = ./src/main.c\
	./src/ft_img.c\
	./src/ft_readmap.c\
	./src/ft_move.c\
	./src/ft_mapfunc.c\
	./src/ft_exit.c\
	./src/ft_collected.c\
	./src/ft_map.c\
	./src/ft_mapchecker.c\
	./src/ft_syncmap.c\
	./src/ft_norm.c

LIBFT_PATH = ./utils

LIBX_PATH = ./minilibx

HEADER = ./src/so_long.h

MAKE = make

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	echo "Compiling Mandatory...."
	$(MAKE) -C ./minilibx
	echo "Compiling Mandatory...."
	$(MAKE) -C $(LIBFT_PATH)
	echo "Compiling Mandatory...."
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
.PHONY : all clean fclean re bonus