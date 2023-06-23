# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 15:41:17 by evocatur          #+#    #+#              #
#    Updated: 2023/06/21 14:41:56 by evocatur         ###   ########.fr        #
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

$(eval STACK = $(shell python stack_gen/stack_gen.py 10))
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

test: all
	@./$(NAME) 1 2 3 4 5 6

clean: 
	@${RM} ${OBJ}

fclean: clean
	@${RM} ${NAME}
	@${RM} ${CHECK}

re: fclean all

.PHONY: all clean fclean re