# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 15:41:17 by evocatur          #+#    #+#              #
#    Updated: 2023/04/19 15:51:23 by evocatur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = $(MAIN_SRC) $(LIBFT_SRC)

MAIN_SRC = push_swap.c push_swap_utilities.c

LIBFT_SRC = ft_libft/*.c

FLAGS = -Wall -Wextra -Werror

OBJ = *.O

NONE='\033[0m'
GREEN='\033[32m'
YELLOW='\033[33m'
GRAY='\033[2;37m'
CURSIVE='\033[3m'

all: $(NAME)

$(NAME) : $(SRC)
	@echo $(CURSIVE)$(GRAY) "     - Compiling $(NAME)..." $(NONE)
	@gcc $(FLAGS) $(SRC)  $(NAME)
	@echo $(GREEN)"- Compiled -"$(NONE)

norm:
	@echo $(GRAY) ""
	@norminette $(SRC) *.h */*.h
	@echo $(NONE) ""

clean:
	@echo $(CURSIVE)$(GRAY) "     - Removing object files..." $(NONE)
	@rm -rf $(OBJ)
	@make -C $(LIBF_DIR) clean

fclean: clean
	@echo $(CURSIVE)$(GRAY) "     - Removing $(NAME)..." $(NONE)
	@rm -rf $(NAME)
	@make -C $(LIBF_DIR) fclean

re: fclean all
