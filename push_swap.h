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

void	ft_append_node(stack **head_ref, int new_value, int new_index);
void	ft_print_stack(stack **head_ref);
void	ft_make_stack(char **list,int len_list);
void	ft_error(void);

# endif 