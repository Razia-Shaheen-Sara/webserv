# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rshaheen <rshaheen@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2026/03/25 16:55:53 by rshaheen      #+#    #+#                  #
#    Updated: 2026/03/25 17:07:07 by rshaheen      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = responseTest

CPPFLAGS = -Wall -Wextra -Werror -std=c++11

CC = c++

OBJ_DIR = obj

SRC = main.cpp src/Handler.cpp src/Response.cpp 

OBJECTS = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME) 

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	
$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	@mkdir -p $(dir $@) 
	@$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	@$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)

clean:
	@rm -rf $(OBJ_DIR)
	
fclean: clean
	@rm -f $(NAME)

re: fclean all

valgrind: $(NAME)
	valgrind --leak-check=full --track-origins=yes ./$(NAME)

.PHONY: all clean fclean re