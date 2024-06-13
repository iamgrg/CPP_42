# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 16:18:15 by gregoire          #+#    #+#              #
#    Updated: 2023/10/20 16:18:16 by gregoire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp PmergeMe.cpp
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

.PHONY: all clean fclean re%                                                                                                                 
