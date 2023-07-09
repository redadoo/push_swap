/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:45:13 by evocatur          #+#    #+#             */
/*   Updated: 2023/07/09 20:01:47 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	sort_of_3(t_stack **a)
{
	if (ft_ascending(a) == 1)
		return;
	if (find_bigger(a) == (*a)->index)
	{
		if ((*a)->next->value > last_node(a)->value)
		{
			ft_sa(a,1);
			ft_rra(a,1);
		}
		else
			ft_ra(a,1);
	}
	else if (find_bigger(a) == 1)
	{
		if ((*a)->value > last_node(a)->value)
			ft_rra(a,1);
		else
		{
			ft_sa(a,1);
			ft_ra(a,1);
		}
	}
	else if (find_bigger(a) == last_node(a)->index)
		ft_sa(a,1);
}

void	small_sort(t_stack **a,t_stack **b)
{
	int		n;
	int		i;
	int		t;
	t_stack *tmp_a;
	t_stack *tmp_b;

	tmp_a = (*a);
	tmp_b = (*b);
	t = 0;
	while (last_node(&tmp_a)->index != 2)
		ft_pb(&tmp_a,&tmp_b,1);
	sort_of_3(&tmp_a);
	i = last_node(&tmp_b)->index + 1;
	while(i)
	{
		n = sorted_pos(&tmp_a,tmp_b->value);
		if (ft_ascending(&tmp_a) == 1 && n != (last_node(&tmp_a)->index)&& n != (last_node(&tmp_a)->index) - 1 || n == 1 || n == last_node(&tmp_a)->index + 1)
		{
			if (tmp_b->index != -1)
				ft_pa(&tmp_a,&tmp_b,1);
 			if(n == 1)
				ft_sa(&tmp_a,1);
			else if(n == last_node(&tmp_a)->index)
				ft_ra(&tmp_a,1);
		}
		else
		{
			if (last_node(&tmp_a)->value > tmp_b->value)
			{
				ft_rra(&tmp_a, 1);
				if (last_node(&tmp_a)->value > tmp_b->value)
					ft_rra(&tmp_a, 1);
				if (tmp_b->index != -1)
 					ft_pa(&tmp_a, &tmp_b,1);
			}
			if (tmp_b->index != -1)
			{
				n = sorted_pos(&tmp_a,tmp_b->value);
				if (tmp_b->index != -1 && n == 0)
				{
					i--;
					if (tmp_b->value > find_smallest(&tmp_a)->value)
					{
						if (tmp_b->value > last_node(&tmp_a)->value)
						{
							ft_pa(&tmp_a,&tmp_b, 1);
							ft_rra(&tmp_a, 1);
							ft_rra(&tmp_a, 1);
						}
						else
						{	
							ft_rra(&tmp_a, 1);
							ft_pa(&tmp_a,&tmp_b, 1);
							ft_rra(&tmp_a, 1);
						}
					}
					else
					{
						ft_ra(&tmp_a, 1);
						ft_ra(&tmp_a, 1);
						ft_pa(&tmp_a,&tmp_b, 1);
					}
				}
				else
				{
					ft_ra(&tmp_a, 1);
					ft_ra(&tmp_a, 1);
				}
			}
			else
			{
				if (find_smallest(&tmp_a)->index == 2)
				{
					t = 2;
					while(t)
					{
						ft_ra(&tmp_a, 1);
						t--;
					}
				}
				else if(find_smallest(&tmp_a)->index == 3)
				{
					t = 2;
					while(t)
					{
						ft_rra(&tmp_a, 1);
						t--;
					}
				}
			}
		}
		i--;
	}
	(*a) = tmp_a;
	(*b) = tmp_b;

}

void big_sort(t_stack **a,t_stack **b)
{
	int		i;
	t_stack *tmp_a;
	t_stack *tmp_b;

	tmp_a = (*a);
	tmp_b = (*b);

	i = find_median(&tmp_a);

}