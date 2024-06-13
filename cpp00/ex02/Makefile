# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gansard <gansard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 15:15:02 by gansard           #+#    #+#              #
#    Updated: 2023/07/25 15:15:03 by gansard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -g
SOURCES = Account.cpp tests.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = banksters

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) 
	$(CXX) $(OBJECTS) -o $@

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf *.o $(EXECUTABLE) output.log output_no_time.log log_no_time.log

fclean: clean

re: fclean all

compare:
	./$(EXECUTABLE) > output.log
	sed 's/\[[^]]*\]//g' output.log > output_no_time.log
	sed 's/\[[^]]*\]//g' 19920104_091532.log > log_no_time.log
	diff output_no_time.log log_no_time.log


.PHONY: all clean fclean re
