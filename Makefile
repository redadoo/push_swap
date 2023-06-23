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

all: $(NAME)

$(NAME): $(OBJ)
	@echo "     - Compiling $(NAME)..."
	@gcc $(CFLAGS) $(OBJ) -o $(NAME)
	@echo $(GREEN)"- Compiled -"
	@rm -rf $(OBJ)

$(OBJ): $(SRC)
	@echo "     - Making object files..."
	@gcc -c $(SRC)

exe_small: all
	@./$(NAME) -670 447 594 350 -323

exe_medium: all
	@./$(NAME) 341 -693 -596 871 -705 -353 769 414 -983 770 -543 47 -362 -968 375 -657 824 382 449 276

gen 10: all
	STACK := $(shell python stack_gen/stack_gen.py 10)
	@./$(NAME) STACK

gen 100: all
	STACK := $(shell python stack_gen/stack_gen.py 100)
	@./$(NAME) STACK

gen 1000: all
	STACK := $(shell python stack_gen/stack_gen.py 1000)
	@./$(NAME) STACK

gen 10000: all
	STACK := $(shell python stack_gen/stack_gen.py 10000)
	@./$(NAME) STACK

clean: 
	@${RM} ${OBJ}

fclean: clean
	@${RM} ${NAME}
	@${RM} ${CHECK}

re: fclean all

.PHONY: all clean fclean re