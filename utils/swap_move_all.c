/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:04:05 by evocatur          #+#    #+#             */
/*   Updated: 2023/05/04 15:58:02 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

 //da finire

 
void ft_rotate(t_stack **c)
{
	t_stack *temp_node;
	int     temp_value;

	temp_value = temp_node->value;
	temp_node = *c;
	temp_node = temp_node->next;
	while (temp_node->next != NULL)
		temp_node = temp_node->next;  
	while (temp_node != NULL)
	{
		if (temp_node->index == last_node(c)->index)
		{
			temp_value = temp_node->value;
			temp_node->value = (*c)->value;
		}
		else if (temp_node->index == (*c)->index)
		{
			
		}
		else
		{
			
		}
		//temp_value = temp_node->value;
				//temp_value = temp_node->value;




		//temp_node->value = temp_node->prev->value;
		//ft_printf("\n%i\n",temp_node->value);
		ft_printf("%i %i %i\n",temp_node->prev->value,temp_node->value,temp_node->next->value);
		temp_node = temp_node->prev;
	}
	
}
