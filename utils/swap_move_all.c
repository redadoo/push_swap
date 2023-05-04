/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:04:05 by evocatur          #+#    #+#             */
/*   Updated: 2023/05/04 15:48:55 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void ft_rotate(t_stack **c)
{
	t_stack *temp_node;
	int     temp_value;
	int     temp_value1;

	temp_value = temp_node->value;
	temp_node = *c;
	temp_node = temp_node->next;
	while (temp_node->next != NULL)
		temp_node = temp_node->next;  
	while (temp_node != NULL)
	{
		//temp_value = temp_node->value;
		//temp_node->value = temp_node->prev->value;
		//ft_printf("\n%i\n",temp_node->value);
		ft_printf("%i %i %i\n",temp_node->prev->value,temp_node->value,temp_node->next->value);
		temp_node = temp_node->prev;
	}
	
}
