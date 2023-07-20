/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:20:07 by edoardo           #+#    #+#             */
/*   Updated: 2023/07/20 18:21:22 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

static	int	small_sort_utilis_2(t_stack **tmp_a, t_stack **tmp_b, int i)
{
	if ((*tmp_b)->value > find_smallest(tmp_a)->value)
	{
		if ((*tmp_b)->value > last_node(tmp_a)->value)
		{
			ft_pa(tmp_a, tmp_b, 1);
			ft_rra(tmp_a, 1);
			ft_rra(tmp_a, 1);
		}
		else
		{
			ft_rra(tmp_a, 1);
			ft_pa(tmp_a, tmp_b, 1);
			ft_rra(tmp_a, 1);
		}
	}
	else
	{
		ft_ra(tmp_a, 1);
		ft_ra(tmp_a, 1);
		ft_pa(tmp_a, tmp_b, 1);
	}
	return (i - 1);
}

static	int	small_sort_utilis_1(t_stack **tmp_a, t_stack **tmp_b, int i, int t)
{
	if ((*tmp_b)->index != -1)
	{
		if ((*tmp_b)->index != -1 && sorted_pos(tmp_a, (*tmp_b)->value) == 0)
			return (small_sort_utilis_2(tmp_a, tmp_b, i));
		else
		{
			ft_ra(tmp_a, 1);
			ft_ra(tmp_a, 1);
		}
	}
	else
	{
		if (find_smallest(tmp_a)->index == 2)
		{
			while (t--)
				ft_ra(tmp_a, 1);
		}
		else if (find_smallest(tmp_a)->index == 3)
		{
			while (t--)
				ft_rra(tmp_a, 1);
		}
	}
	return (i);
}

static	int	small_sort_utilis_0(t_stack **tmp_a, t_stack **tmp_b, int n, int i)
{
	if (ft_ascending(tmp_a) == 1 && n != (last_node(tmp_a)->index)
		&& n != (last_node(tmp_a)->index) - 1
		|| n == 1 || n == last_node(tmp_a)->index + 1)
	{
		if ((*tmp_b)->index != -1)
			ft_pa(tmp_a, tmp_b, 1);
		if (n == 1)
			ft_sa(tmp_a, 1);
		else if (n == last_node(tmp_a)->index)
			ft_ra(tmp_a, 1);
	}
	else
	{
		if (last_node(tmp_a)->value > (*tmp_b)->value)
		{
			ft_rra(tmp_a, 1);
			if (last_node(tmp_a)->value > (*tmp_b)->value)
				ft_rra(tmp_a, 1);
			if ((*tmp_b)->index != -1)
				ft_pa(tmp_a, tmp_b, 1);
		}
		i = small_sort_utilis_1(tmp_a, tmp_b, i, 2);
		return (i);
	}
	return (i);
}

void	small_sort(t_stack **a, t_stack **b)
{
	int		n;
	int		i;
	int		t;
	t_stack	*tmp_a;
	t_stack	*tmp_b;

	tmp_a = (*a);
	tmp_b = (*b);
	t = 0;
	while (last_node(&tmp_a)->index != 2)
		ft_pb(&tmp_a, &tmp_b, 1);
	sorting_of_3(&tmp_a);
	i = last_node(&tmp_b)->index + 1;
	while (i)
	{
		n = sorted_pos(&tmp_a, tmp_b->value);
		i = small_sort_utilis_0(&tmp_a, &tmp_b, n, i);
		i--;
	}
	(*a) = tmp_a;
	(*b) = tmp_b;
}
