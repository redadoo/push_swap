/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:46:55 by evocatur          #+#    #+#             */
/*   Updated: 2023/07/16 00:43:20 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

int	ft_ascending(t_stack **a)
{
	t_stack	*temp;

	temp = *a;
	while (temp->next != NULL)
	{
		if (temp->value < temp->next->value)
			temp = temp->next;
		else
			return (0);
	}
	return (1);
}

int	ft_double_check(char **list)
{
	int	i;
	int	j;
	int	temp;

	i = 1;
	j = 1;
	while (list[i])
	{
		temp = ft_atoi(list[i]);
		while (list[j])
		{
			if (j == i)
				j++;
			else
			{
				if (temp == ft_atoi(list[j]))
					return (0);
				j++;
			}
		}
		j = 1;
		i++;
	}
	return (1);
}

int	ft_check(char *s)
{
	if (ft_string_isdigit(s) == 0)
		return (0);
	if (ft_atoi(s) <= -2147483648 || ft_atoi(s) >= 2147483647)
		return (0);
	return (1);
}

int	ft_check_stack(char **list)
{
	int	i;

	i = 1;
	while (list[i])
	{
		if (ft_check(list[i]) == 0)
		{
			write(2, "Error: found a non int \n", 25);
			return (0);
		}
		i++;
	}
	if (i <= 2)
	{
		write(2, "Error: list too small\n", 23);
		return (0);
	}
	if (ft_double_check(list) == 0)
	{
		write(2, "Error: double number found\n", 28);
		return (0);
	}
	return (1);
}

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
