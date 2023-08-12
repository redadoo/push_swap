/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_utlilities.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:44:11 by evocatur          #+#    #+#             */
/*   Updated: 2023/08/12 11:26:02 by edoardo          ###   ########.fr       */
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

int	static	delete_node_utils(t_stack **h, int i, t_stack	*t, t_stack	*prev)
{
	if (t != NULL && i == 0)
	{
		if ((*h)->next != NULL)
			(*h) = (*h)->next;
		else
			(*h)->index = -1;
	}
	else if (i != 0)
	{
		while (t->next != NULL && t->index < i) 
		{
			prev = t;
			t = t->next;
		}
		if (t == NULL)
			return (0);
		prev->next = t->next;
		if (t->next != NULL)
			t->next->prev = prev;
	}
	free(t);
	return (1);
}

void	delete_node(t_stack **head_ref, int s_index)
{
	t_stack	*prev;
	t_stack	*temp;
	int		tmp;

	temp = (*head_ref);
	tmp = last_node(&temp)->index;
	if (delete_node_utils(head_ref, s_index, temp, prev) == 0)
		return ;
	temp = NULL;
	temp = (*head_ref);
	while (temp->next != NULL && temp->index < s_index)
		temp = temp->next;
	while (temp->next != NULL)
	{
		temp->index -= 1;
		temp = temp->next;
	}
	if (s_index != tmp)
		temp->index -= 1;
}
