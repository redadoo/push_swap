/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:45:13 by evocatur          #+#    #+#             */
/*   Updated: 2023/08/24 16:20:19 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void printStack(t_stack **stack)
{
	t_stack *tmp;

	tmp = (*stack);
	printf("\n------print Stack------\n");
	while(tmp)
	{
		printf("| value : %i index : %i | \n",tmp->value, tmp->index);
		tmp = tmp->next;
	}  
}

void	sorting_of_3(t_stack **a)
{
	if (find_bigger(a)->index == (*a)->index)
	{
		if ((*a)->next->value > last_node(a)->value)
		{
			ft_s(a, 1);
			ft_rrx(a, 1);
		}
		else
			ft_r(a, 1);
	}
	else if (find_bigger(a)->index == 1)
	{
		if ((*a)->value > last_node(a)->value)
			ft_rrx(a, 1);
		else
		{
			ft_s(a, 1);
			ft_r(a, 1);
		}
	}
	else if (find_bigger(a)->index == last_node(a)->index)
		ft_s(a, 1);
}
