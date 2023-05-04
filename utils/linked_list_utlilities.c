/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_utlilities.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:44:11 by evocatur          #+#    #+#             */
/*   Updated: 2023/05/04 13:01:10 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

t_stack	*ft_make_stack(char **list, int len_list)
{
	int			i;
	t_stack		*top;

	top = NULL;
	i = 1;
	while (i < len_list)
	{
		if (ft_check(list[i]) == 0)
			ft_error(&top);
		ft_append_node(&top, ft_atoi(list[i]), i - 1);
		i++;
	}
	top->prev = last_node(&top);
	return (top);
}

void	ft_append_node(t_stack **head_ref, int new_value, int new_index)
{
	t_stack	*new_node;
	t_stack	*last;

	new_node = NULL;
	new_node = (t_stack *)malloc(sizeof(t_stack *));
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
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	new_node->prev = last;
}

t_stack	*last_node(t_stack **head_ref)
{
	t_stack	*last;

	last = *head_ref;
	while (last->next != NULL)
		last = last->next;
	return (last);
}

t_stack	*second_node(t_stack **head_ref)
{
	t_stack	*last;

	last = *head_ref;
	if (last->next != NULL)
		last = last->next;
	else
		return (NULL);
	return (last);
}

void	delete_node(t_stack **head_ref, int s_index)
{
	t_stack	*delete_node;

	delete_node = (*head_ref);
	if (delete_node == NULL || delete_node->index == s_index)
	{
		free(delete_node);
		return ;
	}
	while (delete_node->index != s_index)
		delete_node = delete_node->next;
	delete_node = NULL;
	free (delete_node);
}

t_stack	*prev_node(t_stack **head_ref, int index)
{
	t_stack	*node;

	node = (*head_ref);
	if (node == NULL || node->index == index)
		return (NULL);
	while (node->index != index)
		node = node->next;
	return (node);
}