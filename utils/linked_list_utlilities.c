/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_utlilities.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:44:11 by evocatur          #+#    #+#             */
/*   Updated: 2023/07/12 01:30:04 by edoardo          ###   ########.fr       */
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

t_stack	*find_node(t_stack **head_ref,int value)
{
	t_stack	*find;

	find = (*head_ref);

	while (find->next != NULL)
	{
		if(find->value == value)
			return(find);
		find = find->next;
	}
	return (find);
}

void	delete_node(t_stack **head_ref, int s_index)
{
	t_stack	*prev;
	t_stack	*temp;
	int		tmp;

 	temp = (*head_ref);
	tmp = last_node(&temp)->index;
	if (temp != NULL && s_index == 0)
	{
		if((*head_ref)->next != NULL)
			(*head_ref) = (*head_ref)->next;
		else
			(*head_ref)->index = -1;
	}
 	else if (s_index != 0)
	{
		while (temp->next != NULL && temp->index < s_index) 
		{
			prev = temp;
			temp = temp->next;
		}
		if (temp == NULL)
			return;
		prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = prev;
	}
	temp = NULL;
	free(temp);
	temp = (*head_ref);
	while(temp->next != NULL && temp->index < s_index)
		temp = temp->next;
	while(temp->next != NULL)
	{
		temp->index -= 1;
		temp = temp->next;
	}
	if (s_index != tmp)
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


