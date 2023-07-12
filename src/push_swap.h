/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:51:18 by evocatur          #+#    #+#             */
/*   Updated: 2023/07/12 01:52:16 by edoardo          ###   ########.fr       */
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

#define PRINT(x) printf("\n %i   \n",x);
#define DEBUG(s) printf("\n TEST %s TEST  \n",s);
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
void		push_swap(t_stack **a, t_stack **b);
int			ft_check(char *s);
t_stack		*last_node(t_stack **head_ref);
t_stack		*first_node(t_stack **head_ref);
void		ft_sa(t_stack **a,int i);
void		ft_sb(t_stack **b,int i);
void    	ft_ss(t_stack **a, t_stack **b);
void		ft_pa(t_stack **a, t_stack **b,int i);
void		small_sort(t_stack **a, t_stack **b);
int			ft_descending(t_stack **a);
int			ft_ascending(t_stack **a);
t_stack		*prev_node(t_stack **head_ref, int index);
void		delete_node(t_stack **head_ref, int s_index);
t_stack		*find_node(t_stack **head_ref,int value);
void		push_node(t_stack **head_ref, int value);
void		ft_ra(t_stack **a,int i);
void 		ft_rra(t_stack **a,int i);
void		ft_rrb(t_stack **b,int i);
void		ft_rb(t_stack **b,int i);
void		ft_pb(t_stack **a, t_stack **b,int i);
void		ft_rr(t_stack **a, t_stack **b);
void    	ft_rrr(t_stack **a, t_stack **b);
int			ft_check_stack(char **list);
int			ft_double_check(char **list);
void		ft_free_all(t_stack **a, t_stack **b);
t_stack	*	find_smallest(t_stack **head_ref);
void		sort_of_3(t_stack **a);
t_stack 	*find_bigger(t_stack **head_ref);
void		small_sort(t_stack **a,t_stack **b);
int			sorted_pos(t_stack **head_ref, int value);
void		big_sort(t_stack **a,t_stack **b);
void		print_list(char **list);
t_stack		*find_median(t_stack **head_ref);
void		insertion_sort(int *arr,int n);
void		low_cost_push(t_stack **a,t_stack **b);
int			pushed(t_stack **head_ref,int value);
void		smart_push(t_stack **a, t_stack **b, int median);
t_stack		*find_node_index(t_stack **head_ref,int index);
#endif 