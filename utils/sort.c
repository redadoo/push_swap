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

	index = last_node(&temp_a)->index / 2;
	while (index + 1)
	{
		ft_pb(&temp_a,&temp_b,1);
		index--;
	}
	ft_print_stack(&temp_a);
	ft_print_stack(&temp_b);
}
