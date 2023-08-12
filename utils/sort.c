/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:45:13 by evocatur          #+#    #+#             */
/*   Updated: 2023/08/03 00:27:11 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	sorting_of_3(t_stack **a)
{
	if (find_bigger(a)->index == (*a)->index)
	{
		if ((*a)->next->value > last_node(a)->value)
		{
			ft_sa(a, 1);
			ft_rra(a, 1);
		}
		else
			ft_ra(a, 1);
	}
	else if (find_bigger(a)->index == 1)
	{
		if ((*a)->value > last_node(a)->value)
			ft_rra(a, 1);
		else
		{
			ft_sa(a, 1);
			ft_ra(a, 1);
		}
	}
	else if (find_bigger(a)->index == last_node(a)->index)
		ft_sa(a, 1);
}

void	big_sort(t_stack **a, t_stack **b)
{
	int		i;
	int		n;
	int		x;
	t_stack	*tmp_a;
	t_stack	*tmp_b;

 	tmp_a = (*a);
	tmp_b = (*b);
	i = find_median(&tmp_a)->value;
	while (pushed(&tmp_a, i) != 0)
		smart_push(&tmp_a, &tmp_b, i);
	n = last_node(&tmp_b)->index + 1;
	i = last_node(&tmp_b)->value;
	x = tmp_a->value; 
   	while (n--)
		low_cost_push(&tmp_a, &tmp_b); 
    while (find_node(&tmp_a, x, -1)->index != 0)
		ft_ra(&tmp_a, 1); 
	while (find_smallest(&tmp_a)->index != 0)
		ft_pb(&tmp_a, &tmp_b, 1);
	n = last_node(&tmp_b)->index + 1;
	while (n--)
		low_cost_push(&tmp_a, &tmp_b);
	while (find_smallest(&tmp_a)->index != 0)
		ft_ra(&tmp_a, 1);
}


