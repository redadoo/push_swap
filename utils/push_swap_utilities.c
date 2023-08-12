/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utilities.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:44:43 by evocatur          #+#    #+#             */
/*   Updated: 2023/08/02 13:41:05 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

int	sorted_pos(t_stack **head_ref, int value)
{
	t_stack	*tmp;
	int		n;

	tmp = (*head_ref);
	n = 0;
	while (tmp != NULL)
	{
		if (tmp->value > value)
			return (n);
		n++;
		tmp = tmp->next;
	}
	return (n);
}

static	void	rotate(t_stack **a, t_stack **b, int m, int index)
{
	int	value;

	value = find_node(b, -1, index)->value;
	if (m == index)
	{
		while ((*b)->value != value)
				ft_rb(b, 1);
	}
	else
	{
		while ((*b)->value != value)
			ft_rrb(b, 1);
	}
	if (value == find_smallest(b)->value)
	{
		ft_pa(a, b, 1);
		ft_ra(a, 1);
	}
}

void	low_cost_push(t_stack **a, t_stack **b)
{
	int		i;
	int		j;

	i = find_bigger(b)->index;
	j = find_smallest(b)->index;
	if (i > ((last_node(b)->index + 1) / 2))
		i = ((last_node(b)->index + 1) - find_bigger(b)->index);
	if (j > ((last_node(b)->index + 1) / 2))
		j = ((last_node(b)->index + 1) - find_smallest(b)->index);
	if (i < j)
	{
		rotate(a, b, i, find_bigger(b)->index);
		ft_pa(a, b, 1);
		return ;
	}
	else
	{
		rotate(a, b, j, find_smallest(b)->index);
		return ;
	}
	if (find_smallest(b)->value == find_bigger(b)->value)
		ft_pa(a, b, 1);
	if ((*a)->value > (*a)->next->value)
		ft_ra(a, 1);
}

static	void	push(t_stack **a, t_stack **b, int n, int x)
{
	int	len;

	len = last_node(a)->index + 1;
	if (n < len - x && n != -1)
	{
		n = find_node_index(a, n)->value;
		while ((*a)->value != n)
			ft_ra(a, 1);
		ft_pb(a, b, 1);
	}
	else
	{
		x = find_node_index(a, x)->value;
		while ((*a)->value != x)
			ft_rra(a, 1);
		ft_pb(a, b, 1);
	}
}

void	smart_push(t_stack **a, t_stack **b, int median)
{
	t_stack	*tmp_a;
	int		n;
	int		x;
	int		len;

	len = last_node(a)->index + 1;
	tmp_a = (*a);
	n = -1;
	x = -1;
	while (tmp_a->next != NULL && tmp_a->index < (len / 2))
	{
		if (tmp_a->value < median)
		{
			n = tmp_a->index;
			break ;
		}
		tmp_a = tmp_a->next;
	}
	while (tmp_a != NULL)
	{
		if (tmp_a->value < median)
			x = tmp_a->index;
		tmp_a = tmp_a->next;
	}
	push(a, b, n, x);
}
