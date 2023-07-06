/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utilities.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:44:43 by evocatur          #+#    #+#             */
/*   Updated: 2023/07/06 19:24:56 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	ft_error(t_stack **head_ref)
{
	t_stack	*tmp;

	while (*head_ref != NULL)
	{
		tmp = *head_ref;
		*head_ref = (*head_ref)->next;
		tmp = NULL;
		free(tmp);
	}
	ft_printf("error\n");
	exit(0);
}

void	ft_print_stack(t_stack **a)
{
	t_stack	*last_a;

	last_a = *a;
	ft_printf(" Stack\n");
	ft_printf("----------------------------------- \n");
	while (last_a != NULL)
	{
		ft_printf("| value : %i index : %i | \n", last_a->value, last_a->index);
		last_a = last_a->next;
	}
	ft_printf("----------------------------------- \n");
}

int	ft_check(char *s)
{
	if (ft_string_isdigit(s) == 0)
	{
		return (0);
	}
	if (ft_atoi(s) <= -2147483648 || ft_atoi(s) >= 2147483647)
	{
		return (0);
	}
	return (1);
}

int	ft_check_stack(char **list)
{
	int		i;

	i = 1;
	if(!list)
	{
		write(2,"Error\n",7);
		return (0);
	}
	while (list[i])
	{
		if(ft_check(list[i]) == 0)
		{
			write(2,"Error\n",7);
			return (0);
		}
		i++;
	}
	if (i <= 2)
	{
		write(2,"Error\n",7);
		return (0);
	}
	if (ft_double_check(list) == 0)
	{
		write(2,"Error\n",7);
		return (0);
	}
	return (1);
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

t_stack	*find_smallest(t_stack **head_ref)
{
	t_stack *tmp;
	int		n;
	int		i;
	tmp = (*head_ref);

	i = 0;
	n = tmp->value;
	while (tmp != NULL)
	{
		if (tmp->value < n)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}

int	find_bigger(t_stack **head_ref)
{
	t_stack *tmp;
	int		n;
	int		i;
	tmp = (*head_ref);

	i = 0;
	n = tmp->value;
	while (tmp != NULL)
	{
		if (tmp->value > n)
		{
			n = tmp->value;
			i = tmp->index;
		}
		tmp = tmp->next;
	}
	return (i);
}

int sorted_pos(t_stack **head_ref, int value)
{
	t_stack *tmp;
	int		n;

	tmp = (*head_ref);
	n = 0;
	while (tmp != NULL)
	{
		if (tmp->value > value)
			return (n);
		n++;
		tmp = tmp->next;
	}
	return (n);
}

int sort_top_value(t_stack **head_ref, t_stack **head_ref_b)
{
	t_stack *tmp;
	t_stack *tmp_b;
	int		newindex;
	int		capiamo;
	
	capiamo = 0;
	tmp = (*head_ref);
	tmp_b =(*head_ref_b);
	newindex = sorted_pos(&tmp,tmp_b->value);
}
