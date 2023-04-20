/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:33:35 by evocatur          #+#    #+#             */
/*   Updated: 2023/04/20 16:08:01 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../src/push_swap.h"

void ft_swap_a(stack **a)
{
	int		first_value;
	int		second_value;
	stack	*first_number;
	stack	*second_number;

	first_number = (*a);
	second_number = second_node(a);
	second_value = second_number->value;
	first_value = first_number->value;
	if (second_number == NULL || first_number == NULL)
		return ;
	first_number->value = second_value;
	second_number->value = first_value;
	ft_printf("sa\n");
}
/* void ft_push_a(stack **a, stack **b)
{
	if (b == NULL)
		return ;
	ft_printf("pa\n");
}
void ft_rotate_a(stack **a)
{
	ft_printf("ra\n");
}
void ft_reverse_rotate_a(stack **a)
{
	ft_printf("rra\n");
}
 */