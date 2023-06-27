/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_utlilities.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:44:11 by evocatur          #+#    #+#             */
/*   Updated: 2023/06/27 13:10:00 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

t_stack	*ft_init_stack(char **list, int len_list)
{
	int			i;
	t_stack		*top;

	top = NULL;
	i = 1;
	if (len_list == 0)
	{
		top = malloc(sizeof(t_stack *));
		if (!top)
			return (NULL);
			top->index = -1;
		return (top);
	}
	while (i < len_list)
	{
		ft_append_node(&top, ft_atoi(list[i]));
		i++;
	}
	return (top);
}

void	ft_append_node(t_stack **head_ref, int new_value)
{
	t_stack	*new_node;
	t_stack	*last;

	new_node = NULL;
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
	last = *head_ref;
	while (last->next != NULL)
	{
		last = last->next;
	}
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

int	find_node(t_stack **head_ref,int x, char c)
{
	t_stack	*find;

	find = (*head_ref);

	if(c == 'i')
	{
		while(find->next != NULL && find->value != x)
			find = find->next;
		if (find->value != x)
			return (-1);
		return (find->index);
	}
	else if(c == 'v')
	{
		while(find->next != NULL && find->index != x)
			find = find->next;
		if (find->index != x)
			return (-1);
		return (find->value);
	}
	return (0);
}

void	delete_node(t_stack **head_ref, int s_index)
{
	t_stack	*prev;
	t_stack	*temp;

 	temp = (*head_ref);

	if (temp != NULL && s_index == 0) 
	{
		(*head_ref) = (*head_ref)->next;
		free(temp);
	}
 	else if(s_index != 0)
	{
		while (temp != NULL && temp->index != s_index) 
		{
			prev = temp;
			temp = temp->next;
		}
		if (temp == NULL)
			return;
		prev->next = temp->next;
		temp->next->prev = prev;
		free(temp);
	}
	temp = (*head_ref);
	while(temp->next != NULL && temp->index < s_index)
	{
		temp = temp->next;
	}
	while(temp->next != NULL)
	{
		temp->index -= 1;
		temp = temp->next;
	}
	temp->index -= 1;
}

void	push_node(t_stack **head_ref, int value)
{
	t_stack	*new_node;
 	t_stack	*tmp_node;
	int		index;

	new_node = (t_stack *)malloc(sizeof(t_stack *));
	if (new_node == NULL)
		return ;
	if ((*head_ref)->index == -1)
	{
		new_node->index = 0;
		new_node->value = value;
		new_node->next = NULL;
		new_node->prev = NULL;
		(*head_ref) = new_node;
	}
	else
	{
		new_node->index = (*head_ref)->index;
		new_node->value = value;
		new_node->next = (*head_ref);
		(*head_ref) = new_node;
		tmp_node = (*head_ref);
		tmp_node = tmp_node->next;
		while (tmp_node != NULL)
		{
			tmp_node->index += 1; 
			tmp_node = tmp_node->next;
		}
	}
}


