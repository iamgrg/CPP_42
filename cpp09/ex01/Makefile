# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 08:15:39 by gregoire          #+#    #+#              #
#    Updated: 2023/10/18 08:16:27 by gregoire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp RPN.cpp
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
