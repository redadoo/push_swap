/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:05:38 by evocatur          #+#    #+#             */
/*   Updated: 2023/06/21 15:02:46 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	ft_sb(t_stack **b)
{
	t_stack	*temp_b;
	int		tmp;

	if(last_node(b)->index <= 1)
		return ;
	temp_b = (*b);
	tmp = temp_b->value;
	temp_b->value = temp_b->next->value;
	temp_b->next->value = tmp;
	ft_printf("sb \n");
}