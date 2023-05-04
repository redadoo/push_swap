/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:45:13 by evocatur          #+#    #+#             */
/*   Updated: 2023/05/04 12:23:51 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	insertion_sort(t_stack **a, t_stack **b, size_t len_stack)
{
	t_stack	*temp_a;
	t_stack	*temp_b;
	size_t	len;
	size_t	temp;

	temp_a = (*a);
	temp_b = (*b);
	len = 0;
	temp = 0;

 	if (ft_descending(a) == 1)
	{
		while (len_stack)
		{
			
			len_stack--;
		}
	}
}
