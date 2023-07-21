/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:33:35 by evocatur          #+#    #+#             */
/*   Updated: 2023/07/21 16:18:48 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_sa(t_stack **a)
{
	int		tmp;
	int		tmp_index;
	t_stack	*temp_a;

	if (last_node(a)->index <= 0)
		return ;
	temp_a = (*a);
	tmp = temp_a->value;
	tmp_index = temp_a->index;
	temp_a->value = temp_a->next->value;
	temp_a->next->value = tmp;
}

void	ft_pa(t_stack **a, t_stack **b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_b = (*b);
	push_node(a, temp_b->value);
	delete_node(b, 0);
}

void	ft_ra(t_stack **a)
{
	int		len;
	t_stack	*temp_a;

	temp_a = (*a);
	len = temp_a->value;
	delete_node(a, 0);
	ft_append_node(a, len);
}

void	ft_rra(t_stack **a)
{
	int		len;
	t_stack	*temp_a;

	temp_a = (*a);
	len = last_node(a)->value;
	delete_node(a, last_node(a)->index);
	push_node(a, len);
}
