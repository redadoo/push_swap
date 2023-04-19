/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:33:35 by evocatur          #+#    #+#             */
/*   Updated: 2023/04/19 18:04:54 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_swap(stack **a)
{
	int		first_value;
	int		last_value;
	stack	*first_number;
	stack	*last_number;

	first_number = (*a);
	last_number = last_node(a);

	last_value = last_number->value;
	first_value = first_number->value;

	first_number->value = last_value;
	last_number->value = first_value;

	ft_print_stack(a);
}

void ft_rotate(stack **stack)
{
	
}
void ft_reverse_rotate(stack **stack)
{
	
}
void ft_double_swap(stack **a, stack **b)
{
	
}
void ft_double_rotate(stack **a, stack **b)
{
	
}
void ft_double_reverse_rotate(stack **a, stack **b)
{
	
}