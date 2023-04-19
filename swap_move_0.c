/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move_0.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:33:35 by evocatur          #+#    #+#             */
/*   Updated: 2023/04/19 18:13:48 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_swap(stack **list)
{
	int		first_value;
	int		second_value;
	stack	*first_number;
	stack	*second_number;

	first_number = (*list);
	second_number = second_node(list);
	second_value = second_number->value;
	first_value = first_number->value;
	if (second_number == NULL || first_number == NULL)
		return ;
	first_number->value = second_value;
	second_number->value = first_value;
	ft_print_stack(list);
}

void ft_rotate(stack **list)
{
	
}
void ft_reverse_rotate(stack **list)
{
	
}
void ft_double_swap(stack **a, stack **b)
{
	
}
void ft_double_rotate(stack **a, stack **b)
{
	
}
