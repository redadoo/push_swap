#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
# include <fcntl.h>
# include "../ft_libft/libft.h"

typedef struct s_stack
{
		int	value;
		int index;
		struct s_stack	*next;
} stack;

void	ft_append_node(stack **head_ref, int new_value, int new_index);
void	ft_print_stack(stack **head_ref);
stack	*ft_make_stack(char **list,int len_list);
void	ft_error(stack **head_ref);
void	push_swap(int argc,char **argv);
int		ft_check(char *s);
stack	*last_node(stack **head_ref);
stack	*second_node(stack **head_ref);
void	ft_swap_a(stack **a);
/* void	ft_push_a(stack **a, stack **b);
void	ft_rotate_a(stack **a);
void	ft_reverse_rotate_a(stack **a);
void	ft_reverse_rotate_all(stack **a, stack **b);
void	ft_swap_b(stack **b);
void	ft_push_b(stack **a, stack **b);
void	ft_rotate_b(stack **b);
void	ft_reverse_rotate_b(stack **b);
void	ft_swap_all(stack **a, stack **b);
void	ft_rotate_all(stack **a, stack **b);
void	ft_rotate_reverse_all(stack **a, stack **b);*/
void	insertion_sort(stack **a, size_t len_stack); 
# endif 