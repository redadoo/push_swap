/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_utlilities.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:44:11 by evocatur          #+#    #+#             */
/*   Updated: 2023/04/19 18:01:32 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

stack *ft_make_stack(char **list,int len_list)
{
	int i;
	stack* top;
	 
	top = NULL;
	i = 1;
	while (i < len_list)
	{
		if (ft_check(list[i]) == 0)
			ft_error(&top);
		ft_append_node(&top,ft_atoi(list[i]),i - 1);
		i++;
	}
	ft_print_stack(&top);
	return (top);
}
void ft_append_node(stack **head_ref, int new_value, int new_index)
{
	stack *new_node;
	stack *last;

	new_node = NULL;
	new_node = (stack*)malloc(sizeof(stack*));
	if (!new_node)
		return ;
	new_node->value = new_value;
	new_node->index = new_index;
	last = *head_ref;
	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return ;
	}
	while (last->next)
		last = last->next;
	
	last->next = new_node;
}
stack *last_node(stack **head_ref)
{
	stack	*last;

	last = *head_ref;
	while (last->next != NULL)
		last = last->next;
	return (last);
}