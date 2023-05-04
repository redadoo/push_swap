/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:04:05 by evocatur          #+#    #+#             */
/*   Updated: 2023/05/04 12:39:12 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void ft_rotate(t_stack **c)
{
	t_stack temp_node;
	size_t  len;
	int     temp_value;
	len = last_node(c)->index;
	temp_node = *c;
	while (temp_node.next != NULL)
	{
		if (temp_node.index == 0)
		{
			
		}
		else
		{
			
		}
		temp_node = temp_node.next;
		len--;
	}
	
}
