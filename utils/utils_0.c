/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_0.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 15:04:56 by edoardo           #+#    #+#             */
/*   Updated: 2023/07/21 18:14:56 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

int	pushed(t_stack **head_ref, int value)
{
	t_stack	*tmp;

	tmp = (*head_ref);
	if (tmp == NULL)
		return (0);
	while (tmp->next != NULL)
	{
		if (tmp->value < value)
			return (1);
		tmp = tmp->next;
	}
	if (tmp->value < value )
		return (1);
	return (0);
}

t_stack	*find_smallest(t_stack **head_ref)
{
	t_stack	*tmp;
	t_stack	*smallest;
	int		n;
	int		i;

	tmp = (*head_ref);
	i = 0;
	n = tmp->value;
	smallest = tmp;
	while (tmp != NULL)
	{
		if (tmp->value < n)
		{
			n = tmp->value;
			smallest = tmp;
		}
		tmp = tmp->next;
	}
	return (smallest);
}

t_stack	*find_bigger(t_stack **head_ref)
{
	t_stack	*tmp;
	t_stack	*bigger;
	int		n;

	tmp = (*head_ref);
	n = tmp->value;
	bigger = tmp;
	while (tmp != NULL)
	{
		if (tmp->value > n)
		{
			n = tmp->value;
			bigger = tmp;
		}
		tmp = tmp->next;
	}
	return (bigger);
}

static	void	push_node_utils(t_stack **h, int v,	t_stack	*nw, t_stack	*tn)
{
	nw->value = v;
	nw->index = (*h)->index;
	nw->next = (*h);
	(*h) = nw;
	tn = (*h);
	tn = tn->next;
	while (tn != NULL)
	{
		tn->index += 1; 
		tn = tn->next;
	}
}

void	push_node(t_stack **head_ref, int value)
{
	t_stack	*new_node;
	t_stack	*tmp_node;

	new_node = (t_stack *)malloc(sizeof(t_stack *));
	if (new_node == NULL)
		return ;
	if ((*head_ref)->index == -1)
	{
		new_node->index = 0;
		new_node->next = NULL;
		new_node->prev = NULL;
		new_node->value = value;
		(*head_ref) = new_node;
	}
	else
		push_node_utils(head_ref, value, new_node, tmp_node);
}
