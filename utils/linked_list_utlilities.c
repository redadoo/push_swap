/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_utlilities.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:44:11 by evocatur          #+#    #+#             */
/*   Updated: 2023/06/21 16:32:31 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

t_stack	*ft_init_stack(char **list, int len_list)
{
	int			i;
	t_stack		*top;

	top = NULL;
	i = 1;
	while (i < len_list)
	{
		if (ft_check(list[i]) == 0)
		{
			ft_error(&top);
		}
		ft_append_node(&top, ft_atoi(list[i]), i - 1);
		i++;
	}
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
	new_node->next = NULL;
	new_node->prev = NULL;

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

t_stack	*first_node(t_stack **head_ref)
{
	t_stack	*last;

	last = *head_ref;
	return (last);
}

void	delete_node(t_stack **head_ref, int s_index)
{
	t_stack	*delete_node;
	t_stack	*tmp_list;
	t_stack	*tmp_next;

	delete_node = (*head_ref);
	tmp_list = (*head_ref);

	while (delete_node->index < s_index - 1)
		delete_node = delete_node->next;
	while (tmp_list->index < s_index - 1)
		tmp_list = tmp_list->next;
	tmp_next = delete_node->next->next;
	tmp_list->next = tmp_next;
	tmp_list = tmp_list->next;
	while (tmp_list->next != NULL)
	{
		tmp_list->index -= 1;
		tmp_list = tmp_list->next;
	}
	tmp_list->index -= 1;
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