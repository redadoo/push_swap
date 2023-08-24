/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:33:35 by evocatur          #+#    #+#             */
/*   Updated: 2023/08/24 15:43:29 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	ft_s(t_stack **stack, int i)
{
	int		tmp;
	int		tmp_index;
	t_stack	*tmp_;

	if (last_node(stack)->index <= 0)
		return ;
	tmp_ = (*stack);
	tmp = tmp_->value;
	tmp_index = tmp_->index;
	tmp_->value = tmp_->next->value;
	tmp_->next->value = tmp;
	if (i == 1)
		ft_printf("sa\n");
	if (i == 2)
		ft_printf("sb\n");
}

void	ft_p(t_stack **stack_0, t_stack **stack_1, int i)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_b = (*stack_1);
	if ((*stack_1)->next)
		(*stack_1) = (*stack_1)->next;
	temp_b->next = (*stack_0);
	(*stack_0)->prev = temp_b;
	(*stack_0) = temp_b;
	if (i == 1)
		ft_printf("pa\n");
	if (i == 2)
		ft_printf("pa\n");
}

void	ft_r(t_stack **stack, int i)
{
	int		last_index;
	t_stack	*tmp;
	t_stack	*tmp_0;

	last_index = last_node(stack)->index;
	tmp = (*stack);
	(*stack) = (*stack)->next;
	(*stack)->index--;
	last_node(stack)->next = tmp;
	tmp->next = NULL;
	tmp->index = ++last_index;
	tmp = (*stack);
	tmp = tmp->next;
	while (tmp)
	{
		tmp->index--;
		tmp = tmp->next;
	}
	if (i == 1)
		ft_printf("pa\n");
	if (i == 2)
		ft_printf("pa\n");
}

void	ft_rrx(t_stack **stack, int i)
{
	t_stack	*tmp;
	t_stack	*tmp_0;

	tmp = (*stack);
	while (tmp->next->next)
		tmp = tmp->next;
	tmp_0 = (*stack);
	while (tmp_0->next)
		tmp_0 = tmp_0->next;
	tmp->next = NULL;
	tmp_0->index = 0;
	tmp_0->next = (*stack);
	(*stack) = tmp_0;
	tmp = (*stack);
	tmp = tmp->next;
	while (tmp)
	{
		tmp->index++;
		tmp = tmp->next;
	}
	if (i == 1)
		ft_printf("pa\n");
	if (i == 2)
		ft_printf("pa\n");
}
