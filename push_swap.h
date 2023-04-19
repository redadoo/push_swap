#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
# include <fcntl.h>
# include "ft_libft/libft.h"

typedef struct s_stack
{
		int	value;
		int index;
		struct s_stack	*next;
} stack;

int		ft_return_int(char *n);
void	ft_append_node(stack **head_ref, int new_value, int new_index);

# endif 