/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:46:55 by evocatur          #+#    #+#             */
/*   Updated: 2023/07/03 14:04:34 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

int ft_ascending(t_stack **a)
{
	t_stack *temp;

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

int ft_double_check(char **list)
{
	int i;
	int j;
	int temp;

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
				{
					return (0);
				}
				j++;
			}	
		}
		j = 0;
		i++;
	}
	return (1);
}
