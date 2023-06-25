/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:05:38 by evocatur          #+#    #+#             */
/*   Updated: 2023/06/25 18:44:16 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	ft_sb(t_stack **b)
{
	t_stack	*temp_b;
	int		tmp;

	if(last_node(b)->index <= 1)
		return ;
	temp_b = (*b);
	tmp = temp_b->value;
	temp_b->value = temp_b->next->value;
	temp_b->next->value = tmp;
	ft_printf("sb \n");
	ft_print_stack(b);	
}

void	ft_pb(t_stack **a, t_stack **b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	push_node(b,(*a)->value);	
	delete_node(a,0);
	temp_a = (*a);
	ft_printf("pb \n");	
}

void ft_rb(t_stack **b)
{
	t_stack	*temp_b;

	temp_b = (*b);

	ft_append_node(b, temp_b->value);
	delete_node(b, 0);
	ft_printf("rb \n");
	ft_print_stack(b);	
}

void ft_rrb(t_stack **b)
{
	t_stack	*temp_b;

	temp_b = (*b);

	push_node(b, last_node(b)->value);
	while(temp_b->next != NULL)
	{
		temp_b = temp_b->next;
	}
	temp_b->prev->next = NULL;
	free(temp_b);
	ft_printf("rrb \n");
	ft_print_stack(b);
}
