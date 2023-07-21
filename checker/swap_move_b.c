/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:05:38 by evocatur          #+#    #+#             */
/*   Updated: 2023/07/21 16:18:50 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_sb(t_stack **b)
{
	int		tmp;
	int		tmp_index;
	t_stack	*temp_b;

	if (last_node(b)->index <= 0)
		return ;
	temp_b = (*b);
	tmp = temp_b->value;
	tmp_index = temp_b->index;
	temp_b->value = temp_b->next->value;
	temp_b->next->value = tmp;
}

void	ft_pb(t_stack **a, t_stack **b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	push_node(b, (*a)->value);
	delete_node(a, 0);
}

void	ft_rb(t_stack **b)
{
	int		len;
	t_stack	*temp_b;

	temp_b = (*b);
	len = temp_b->value;
	delete_node(b, 0);
	ft_append_node(b, len);
}

void	ft_rrb(t_stack **b)
{
	int		len;
	t_stack	*temp_b;

	temp_b = (*b);
	len = last_node(b)->value;
	delete_node(b, last_node(b)->index);
	push_node(b, len);
}
