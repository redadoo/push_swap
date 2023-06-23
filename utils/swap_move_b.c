/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:05:38 by evocatur          #+#    #+#             */
/*   Updated: 2023/06/21 15:02:46 by evocatur         ###   ########.fr       */
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
}

void	ft_pb(t_stack **a, t_stack **b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_a = (*a);
	temp_b = (*b);
	if(last_node(a)->index == 0)
		return ;
	push_node(&temp_b,temp_a->value);
	delete_node(&temp_a,0);
}

void ft_rb(t_stack **b)
{
	t_stack	*temp_b;

	temp_b = (*b);

	ft_append_node(b, temp_b->value);
	delete_node(b, 0);
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
}