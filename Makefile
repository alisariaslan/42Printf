# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ali <ali@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 09:48:08 by ali               #+#    #+#              #
#    Updated: 2022/12/08 09:52:44 by ali              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
FILES = $(shell find . -name "ft_*.c")

$(NAME):*.c
	gcc $(FLAGS) -c $(FILES)
	ar rc $(NAME) *.o
	
all: $(NAME)

clean:
	rm -f  *.o
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

d:
	gcc $(FILES)
	./a.out