/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:51:18 by evocatur          #+#    #+#             */
/*   Updated: 2023/08/24 16:01:02 by evocatur         ###   ########.fr       */
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
	struct s_stack	*prev;
}	t_stack;

void		ft_append_node(t_stack **head_ref, int new_value);
t_stack		*ft_init_stack(char **list, int len_list);
void		ft_error(t_stack **head_ref);
void		push_swap(t_stack **a, t_stack **b);
int			ft_check(char *s);
t_stack		*last_node(t_stack **head_ref);
void		ft_s(t_stack **stack, int i);
void		ft_ss(t_stack **a, t_stack **b);
void		ft_p(t_stack **stack_0, t_stack **stack_1, int i);
int			ft_ascending(t_stack **a);
void		ft_r(t_stack **stack, int i);
void		delete_node(t_stack **head_ref, int s_index);
t_stack		*find_node(t_stack **head_ref, int value, int index);
void		push_node(t_stack **head_ref, int value);
void		ft_rrx(t_stack **stack, int i);
void		ft_rr(t_stack **a, t_stack **b);
void		ft_rrr(t_stack **a, t_stack **b);
int			ft_check_stack(char **list);
int			ft_double_check(char **list);
void		ft_free_all(t_stack **a, t_stack **b);
t_stack		*find_smallest(t_stack **head_ref);
void		sorting_of_3(t_stack **a);
t_stack		*find_bigger(t_stack **head_ref);
int			sorted_pos(t_stack **head_ref, int value);
void		big_sort(t_stack **a, t_stack **b);
t_stack		*find_median(t_stack **head_ref);
void		insertion_sort(int *arr, int n);
int			pushed(t_stack **head_ref, int value);
t_stack		*find_node_index(t_stack **head_ref, int index);
void		printStack(t_stack **stack);
#endif 