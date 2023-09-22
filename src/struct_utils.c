/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:11:02 by fborroto          #+#    #+#             */
/*   Updated: 2023/09/22 17:21:52 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	between_quoation(char *str)
{
	int		i;
	int		space;

	i = -1;
	space = 0;
	while (str[++i])
	{
		if ((int)str[i] == 32)
			space++;
	}
	if (space > 0)
		return (1);
	return (0);
}

void	ft_add(t_stack **head_ref, int value)
{
	t_stack	*new_node;
	t_stack	*last;

	new_node = NULL;
	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->value = value;
	if (*head_ref == NULL)
	{
		new_node->next = NULL;
		new_node->index = 0;
		*head_ref = new_node;
		return ;
	}
	last = (*head_ref);
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	new_node->prev = last;
	new_node->next = NULL;
	new_node->index = last->index + 1;
}

void	ft_init(t_stack **a, char **argv, int argc)
{
	int		i;
	int		x;
	char	**numbers;

	i = 1;
	x = 0;
	(*a) = NULL;
	while (i < argc)
	{
		if (i < argc && between_quoation(argv[i]) == 1)
		{
			numbers = ft_split(argv[i], ' ');
			while (numbers[x])
			{
				ft_add(a, ft_atoi(numbers[x], numbers));
				x++;
			}
			free_tab(numbers);
			i++;
		}
		else if (i < argc)
			ft_add(a, ft_atoi(argv[i], NULL));
		i++;
	}
}

t_stack	*find_smallest(t_stack *a)
{
	t_stack	*smallest;

	smallest = a;
	while (a)
	{
		if (a->value < smallest->value)
			smallest = a;
		a = a->next;
	}
	return (smallest);
}

void	ft_close(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = (*a);
	while (tmp->next != NULL)
	{
		free(tmp);
		tmp = tmp->next;
	}
	free(tmp);
	if (!(*b))
		exit(0);
	tmp = (*b);
	while (tmp->next != NULL)
	{
		free(tmp);
		tmp = tmp->next;
	}
	free(tmp);
	exit(0);
}
