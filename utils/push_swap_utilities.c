/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utilities.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:44:43 by evocatur          #+#    #+#             */
/*   Updated: 2023/06/21 14:38:23 by evocatur         ###   ########.fr       */
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
	ft_printf(" Stack A\n");
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
		ft_printf("digit %i \n",ft_atoi(s));
		return (0);
	}
	if (ft_atoi(s) <= -2147483648)
	{
		ft_printf("min %i \n",ft_atoi(s));
		return (0);
	}
	return (1);
}
