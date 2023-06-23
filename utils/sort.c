/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:45:13 by evocatur          #+#    #+#             */
/*   Updated: 2023/06/21 16:34:09 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	small_sort(t_stack **a, t_stack **b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;
	int		counter;
	temp_a = (*a);
	temp_b = (*b);
	
	counter = 0;

	if(temp_a->value > last_node(a)->value)
		ft_rra(a);
	if (temp_a->value > temp_a->next->value)
		ft_sa(a);
	
	// if (temp_a->value > temp_a->next->value)
	// 	ft_sa(&temp_a);
	// if (temp_a->value < last_node(&temp_a)->value)
	// 	ft_ra(&temp_a);

}
