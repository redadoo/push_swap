/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:51:18 by evocatur          #+#    #+#             */
/*   Updated: 2023/05/04 11:54:53 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
# include <fcntl.h>
# include "../ft_libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

void	ft_append_node(t_stack **head_ref, int new_value, int new_index);
void	ft_print_stack(t_stack **head_ref);
t_stack	*ft_make_stack(char **list, int len_list);
void	ft_error(t_stack **head_ref);
void	push_swap(int argc, char **argv);
int		ft_check(char *s);
t_stack	*last_node(t_stack **head_ref);
t_stack	*second_node(t_stack **head_ref);
void	ft_swap_sa(t_stack **a);
void	ft_push_b(t_stack **a, t_stack **b);
void	insertion_sort(t_stack **a, t_stack **b, size_t len_stack);
void	quick_sort(t_stack **a, t_stack **b, size_t len_stack);
int		ft_descending(t_stack **a);
int		ft_ascending(t_stack **a);

#endif 