/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:51:18 by evocatur          #+#    #+#             */
/*   Updated: 2023/06/21 15:43:18 by evocatur         ###   ########.fr       */
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
void		ft_print_stack(t_stack **a);
t_stack		*ft_init_stack(char **list, int len_list);
void		ft_error(t_stack **head_ref);
void		push_swap(int argc, char **argv);
int			ft_check(char *s);
t_stack		*last_node(t_stack **head_ref);
t_stack		*first_node(t_stack **head_ref);
void		ft_sa(t_stack **a);
void		ft_sb(t_stack **b);
void    	ft_ss(t_stack **a, t_stack **b);
void		ft_pa(t_stack **a, t_stack **b);
void		small_sort(t_stack **a, t_stack **b);
int			ft_descending(t_stack **a);
int			ft_ascending(t_stack **a);
t_stack		*prev_node(t_stack **head_ref, int index);
void		delete_node(t_stack **head_ref, int s_index);
int			find_node(t_stack **head_ref,int x, char c);
void		push_node(t_stack **head_ref, int value);
void		ft_ra(t_stack **a);
void 		ft_rra(t_stack **a);
void		ft_rrb(t_stack **b);
void		ft_rb(t_stack **b);
void		ft_pb(t_stack **a, t_stack **b);
void		ft_rr(t_stack **a, t_stack **b);
void    	ft_rrr(t_stack **a, t_stack **b);
#endif 