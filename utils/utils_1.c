/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 15:00:27 by edoardo           #+#    #+#             */
/*   Updated: 2023/07/16 01:14:05 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

t_stack	*find_node_index(t_stack **head_ref, int index)
{
	t_stack	*find;

	find = (*head_ref);
	while (find->next != NULL)
	{
		if (find->index == index)
			return (find);
		find = find->next;
	}
	return (find);
}

void	insertion_sort(int *arr, int n)
{
	int	i;
	int	key;
	int	j;

	i = 1;
	while (i < n)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
		i++;
	}
}

t_stack	*find_median(t_stack **head_ref)
{
	int		i;
	int		*array;
	int		size;
	t_stack	*tmp;

	tmp = (*head_ref);
	size = last_node(head_ref)->index + 1;
	array = malloc(size * sizeof(int));
	size = 0;
	while (tmp->next != NULL)
	{
		array[size++] = tmp->value;
		tmp = tmp->next;
	}
	insertion_sort(array, last_node(head_ref)->index);
	i = array[last_node(head_ref)->index / 2];
	free(array);
	tmp = (*head_ref);
	while (tmp->next != NULL)
	{
		if (tmp->value == i)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}

void	ft_free_all(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	while (*a != NULL)
	{
		tmp = *a;
		(*a) = (*a)->next;
		free(tmp);
		tmp = NULL;
	}
	if ((*b)->index == -1)
		free((*b));
}

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
