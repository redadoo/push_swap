/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:33:35 by evocatur          #+#    #+#             */
/*   Updated: 2023/06/28 20:29:45 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	ft_sa(t_stack **a, int i)
{
	t_stack *temp_a;
	int      tmp;
  	int     tmp_index;

	if (last_node(a)->index <= 0)
		return ;
	temp_a = (*a);
	tmp = temp_a->value;
    tmp_index = temp_a->index;
	temp_a->value = temp_a->next->value;
	temp_a->next->value = tmp;
	if ( i == 1)
 		ft_printf("sa\n");	
}

void	ft_pa(t_stack **a, t_stack **b,int i)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_a = (*a);
	temp_b = (*b);
	if(last_node(b)->index == 0)
		return ;
	push_node(&temp_a,temp_b->value);
	delete_node(&temp_b,0);
	if ( i == 1)
 		ft_printf("pa\n");	
}

void ft_ra(t_stack **a, int i)
{
	t_stack	*temp_a;
	int 	len;

	temp_a = (*a);
	len = temp_a->value;

	delete_node(a, 0);
	ft_append_node(a, len);
	if ( i == 1)
		ft_printf("ra\n");
}

void ft_rra(t_stack **a, int i)
{
	t_stack	*temp_a;
	int 	len;

	temp_a = (*a);
	len = last_node(a)->value;
	delete_node(a, last_node(a)->index);
	push_node(a, len);
	if (i == 1)
		ft_printf("rra\n");
}

