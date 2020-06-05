# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hstark <hstark@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/01 16:02:40 by hstark            #+#    #+#              #
#    Updated: 2020/02/20 12:14:55 by hstark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = RTv1
FLAGS = -Wall -Wextra -Werror -I includes/ -g #-fsanitize=address
LIBFLAGS = -L./libs/libft -lft -L./libs/minilibx -lmlx -framework OpenGL -framework AppKit
FILES = ambient.c cam.c cone.c cylinder.c get_next_line.c image.c key.c light.c main.c mlx.c parser.c parser2.c plane.c ray.c sphere.c vectors.c vectors2.c
INCFILES = includes/rtv1.h
SRCS = $(addprefix src/, $(FILES))
OBJ = $(addprefix objectives/, $(FILES:.c=.o))


all: lib
	make startuem -j

startuem: $(NAME)

$(NAME):$(OBJ) $(INCFILES)
	gcc $(FLAGS) $(LIBFLAGS) -o $(NAME) $(OBJ)

objectives/%.o: src/%.c | objectives
	gcc $(FLAGS) -o $@ -c $^

re: fclean all

lib:
	make -C ./libs/libft -j
	make -C ./libs/minilibx -j

clean:
	rm -rf objectives/
	make clean -C ./libs/libft
	make clean -C ./libs/minilibx

fclean: clean
	make fclean -C ./libs/libft
	rm -rf $(NAME)

objectives:
	mkdir -p objectives