/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:33:35 by evocatur          #+#    #+#             */
/*   Updated: 2023/05/04 11:38:52 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	ft_swap_sa(t_stack **a)
{
	int		first_value;
	int		second_value;
	t_stack	*first_number;
	t_stack	*second_number;

	first_number = (*a);
	second_number = second_node(a);
	second_value = second_number->value;
	first_value = first_number->value;
	if (second_number == NULL || first_number == NULL)
		return ;
	first_number->value = second_value;
	second_number->value = first_value;
	ft_printf("sa");
	ft_print_stack(a);

}
