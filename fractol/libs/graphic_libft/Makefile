# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/21 15:36:29 by SstarZ            #+#    #+#              #
#    Updated: 2020/02/11 17:30:51 by hstark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libgft.a
INCLUDES = -I ../../minilibx/ -I ../libft/
LIB = -L../libft/ -lft -L../../minilibx/ -lmlx
FLAGS = -Wall -Wextra -Werror
FILES 		= image_operations.c

OFILES = $(addprefix objectives/, $(FILES:%.c=%.o))

all: $(NAME)

$(NAME): $(OFILES)
	ar -rc $(NAME) $(OFILES)

objectives/%.o: ./%.c | objectives
	gcc $(FLAGS) $(INCLUDES) -o $@ -c $^

objectives:
	mkdir objectives/

clean:
	rm -rf objectives/

fclean: clean
	rm -rf $(NAME)

re: fclean all
