# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 09:48:08 by ali               #+#    #+#              #
#    Updated: 2022/12/09 15:50:35 by msariasl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
FILES = $(shell find . -name "ft_*.c")

$(NAME):*.c
	gcc $(FLAGS) -c 
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