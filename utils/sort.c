/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:45:13 by evocatur          #+#    #+#             */
/*   Updated: 2023/06/28 20:52:01 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	small_sort(t_stack **a, t_stack **b)
{
	t_stack		*temp_a;
	t_stack		*temp_b;
	int			len;
	int			index;

	temp_a = (*a);
	temp_b = (*b);
	index = 0;
	while (ft_ascending(&temp_a) != 1)	
	{
		len = last_node(&temp_a)->index;
		while (len)
		{
			if (temp_a->value > temp_a->next->value)
		 	{
				ft_sa(&temp_a,1);
				ft_ra(&temp_a,1);
			}
		 	else if (temp_a->value < temp_a->next->value)
			{
				ft_ra(&temp_a,1);
			}
		 	len--;
		}
		ft_ra(&temp_a,1);
	}
	printf(" %i  \n", index);
}

void	sort(t_stack **a, t_stack **b)
{
	t_stack		*temp_a;
	t_stack		*temp_b;
	int			index;
	int			pivot;

	temp_a = (*a);
	temp_b = (*b);

	pivot = 0;
	index = last_node(&temp_a)->index / 2;
	while (index + 1)
	{
		ft_pb(&temp_a,&temp_b,1);
		index--;
	}
	ft_print_stack(&temp_a);
	ft_print_stack(&temp_b);
	while (ft_ascending(&temp_a) != 1)
	{
		if (pivot == 100)
			break;

		index = temp_a->index;
		if (temp_a->value < temp_a->next->value)
		{
			if (index == 0)
				ft_sa(&temp_a,1);
			else
			{
				while (index)
				{
					ft_ra(&temp_a,1);
					index--;
				}
			}
		}
		temp_a = temp_a->next;
		pivot++;
	}
	ft_print_stack(a);
}
