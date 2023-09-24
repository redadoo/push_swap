# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 22:02:43 by fborroto          #+#    #+#              #
#    Updated: 2023/09/24 03:19:54 by edoardo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap


SRC = $(MAIN_SRC)

MAIN_SRC = src/*.c

CHECKER_SRC = src/check.c src/ft_moves.c src/ft_moves2.c src/ft_split.c src/ft_utils.c src/struct_utils.c src/utils.c src_checker/*.c

OBJ = *.o

CFLAGS = -Wall -Wextra -Werror 

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@echo "     - Compiling $(NAME)..."
	@gcc $(CFLAGS) $(OBJ) -o $(NAME)
	@echo $(GREEN)"- Compiled -"
	@rm -rf $(OBJ)

$(OBJ): $(SRC)
	@echo "     - Making object files..."
	@gcc -c $(SRC) $(CFLAGS)

gen: all
	@./$(NAME) $(STACK)

test:all
	@./$(NAME) 5 2 3 
	
leak:all
	@valgrind --leak-check=full --show-leak-kinds=all ./$(NAME) "1 4" 32 2 1
	@${RM} ${OBJ}

comp_check:
	@gcc -c $(CHECKER_SRC) $(CFLAGS)
	@gcc $(CFLAGS) $(OBJ) -o checker
	@${RM} ${OBJ}


clean: 
	@${RM} ${OBJ}

fclean: clean
	@${RM} ${NAME}
	@${RM} ${CHECK}

re: fclean all

.PHONY: all clean fclean re