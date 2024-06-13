# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gansard <gansard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 12:35:31 by gansard           #+#    #+#              #
#    Updated: 2023/09/04 14:43:58 by gansard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = AMateria.cpp Character.cpp Cure.cpp  Ice.cpp MateriaSource.cpp main.cpp 
OBJ = $(SRC:.cpp=.o)
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re