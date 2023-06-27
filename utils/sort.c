/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:45:13 by evocatur          #+#    #+#             */
/*   Updated: 2023/06/27 14:44:32 by evocatur         ###   ########.fr       */
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
			//ricreare questo algoritmo ma al contrario cosi da avere subito il numero minore davanti
			/*if (last_node(&temp_a)->value < temp_a->value)
			{
				ft_rra(&temp_a);
				index += 1;
			}*/
			if (temp_a->value > temp_a->next->value)
		 	{
				ft_sa(&temp_a);
				ft_ra(&temp_a);
				index += 2;
			}
		 	else if (temp_a->value < temp_a->next->value)
			{
				ft_ra(&temp_a);
				index += 1;
			}
		 	len--;
		}
		ft_ra(&temp_a);
		index += 1;
	}
	printf(" %i  \n", index);
}
