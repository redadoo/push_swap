/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_utlilities.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:44:11 by evocatur          #+#    #+#             */
/*   Updated: 2023/08/24 15:19:04 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	ft_append_node(t_stack **head_ref, int new_value)
{
	t_stack	*new_node;
	t_stack	*last;

	new_node = malloc(sizeof(t_stack *));
	if (!new_node)
		return ;
	new_node->value = new_value;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head_ref == NULL)
	{
		new_node->index = 0;
		*head_ref = new_node;
		return ;
	}
	last = (*head_ref);
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	new_node->prev = last;
	new_node->index = last->index + 1;
}

t_stack	*last_node(t_stack **head_ref)
{
	t_stack	*last;

	last = *head_ref;
	while (last->next != NULL)
		last = last->next;
	return (last);
}

t_stack	*find_node(t_stack **head_ref, int value, int index)
{
	t_stack	*find;

	find = (*head_ref);
	while (find->next != NULL)
	{
		if(index == -1)
		{
			if (find->value == value)
				return (find);
		}
		else
		{
			if (find->index == index)
				return (find);
		}
		find = find->next;
	}
	return (find);
}
