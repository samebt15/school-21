# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hstark <hstark@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/19 18:05:38 by hstark            #+#    #+#              #
#    Updated: 2020/02/20 12:11:51 by hstark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCCOPT = -Wall -Wextra -Werror
SRC = ft*.c
NAME = libft.a

all: $(NAME)

$(NAME):
		gcc -c $(GCCOPT) $(SRC) 
		ar rc $(NAME) *.o
		
clean:
		rm -rf *.o

fclean: clean
		rm -rf $(NAME)

re: fclean all
