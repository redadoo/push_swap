# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 15:41:17 by evocatur          #+#    #+#              #
#    Updated: 2023/07/09 15:08:39 by edoardo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = $(MAIN_SRC) $(UTILITIES_SRC) $(LIBFT_SRC)

MAIN_SRC = src/*.c

LIBFT_SRC = ft_libft/*.c

UTILITIES_SRC = utils/*.c

OBJ = *.o

CFLAGS = -Wall -Wextra -Werror 

RM = rm -rf

$(eval STACK = $(shell python3 stack_gen/stack_gen.py 20))
MY_VAR := $(shell echo STACK )

all: $(NAME)

$(NAME): $(OBJ)
	@echo "     - Compiling $(NAME)..."
	@gcc $(CFLAGS) $(OBJ) -o $(NAME)
	@echo $(GREEN)"- Compiled -"
	@rm -rf $(OBJ)

$(OBJ): $(SRC)
	@echo "     - Making object files..."
	@gcc -c $(SRC)

gen: all
	@./$(NAME) $(STACK)

leaks: all
	@leaks --groupByType --atExit -- ./$(NAME) $(STACK)

test: all
	@./$(NAME) -35 95 -81 3 9 2 -15 -50 1 -37 -52 -91 46 -23 -80 -78 -42 -26 65 19

clean: 
	@${RM} ${OBJ}

fclean: clean
	@${RM} ${NAME}
	@${RM} ${CHECK}

re: fclean all

.PHONY: all clean fclean re
