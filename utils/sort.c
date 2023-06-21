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

void	small_sort(t_stack **a, t_stack **b, size_t len_stack)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_a = (*a);
	temp_b = (*b);
	
	ft_print_stack(a);
	delete_node(a,0);
	ft_print_stack(a);
	// while (temp_a->next != NULL)
	// {
	// 	ft_printf(" %i \n" ,temp_a->value);
	// 	temp_a = temp_a->next; 
	// }
	
}
