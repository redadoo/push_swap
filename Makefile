# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 15:41:17 by evocatur          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2023/08/03 18:17:07 by edoardo          ###   ########.fr        #
=======
#    Updated: 2023/07/26 17:06:00 by evocatur         ###   ########.fr        #
>>>>>>> 183cd13afa0ab740d8dad9bf7e296ebffe30b753
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

<<<<<<< HEAD
$(eval STACK = $(shell python3 stack_gen/stack_gen.py 10))
=======
$(eval STACK = $(shell python3 stack_gen/stack_gen.py 5))
>>>>>>> 183cd13afa0ab740d8dad9bf7e296ebffe30b753
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
	@leaks --groupByType --atExit -- ./$(NAME) 1 7 4

test: all
	@./$(NAME) 1 7 4
test1: all
	@./$(NAME) 4 3 1
clean: 
	@${RM} ${OBJ}

fclean: clean
	@${RM} ${NAME}
	@${RM} ${CHECK}

re: fclean all

.PHONY: all clean fclean re
