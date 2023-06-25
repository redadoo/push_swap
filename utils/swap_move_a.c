/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:33:35 by evocatur          #+#    #+#             */
/*   Updated: 2023/06/21 15:02:36 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	ft_sa(t_stack **a)
{
	t_stack *temp_a;
	int      tmp;
  int     tmp_index;

	if(last_node(a)->index <= 0)
		return ;
	temp_a = (*a);
	tmp = temp_a->value;
  tmp_index = temp_a->index;
	temp_a->value = temp_a->next->value;
	temp_a->next->value = tmp;
  ft_printf("sa \n");	
}

void	ft_pa(t_stack **a, t_stack **b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_a = (*a);
	temp_b = (*b);
	if(last_node(b)->index == 0)
		return ;
	push_node(&temp_a,temp_b->value);
	delete_node(&temp_b,0);
	ft_printf("pa \n");	
}

void ft_ra(t_stack **a)
{
	t_stack	*temp_a;

	temp_a = (*a);

	ft_append_node(a, temp_a->value);
	delete_node(a, 0);
	ft_printf("ra \n");
		ft_print_stack(a);	

}

void ft_rra(t_stack **a)
{
	t_stack	*temp_a;

	temp_a = (*a);

	push_node(a, last_node(a)->value);
	while(temp_a->next != NULL)
	{
		temp_a = temp_a->next;
	}
	temp_a->prev->next = NULL;
	free(temp_a);
	ft_printf("rra \n");
	ft_print_stack(a);	
}

