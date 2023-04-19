/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utilities.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:44:43 by evocatur          #+#    #+#             */
/*   Updated: 2023/04/19 18:03:21 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void ft_error(stack **head_ref)
{
	ft_printf("error\n");
	stack* tmp;

   	while (*head_ref != NULL)
    {
       tmp = *head_ref;
       *head_ref = (*head_ref)->next;
	   tmp = NULL;
       free(tmp);
    }
	exit(0);
}
void ft_print_stack(stack **head_ref)
{
	stack *last;

	last = *head_ref;

	ft_printf("\n");
	while (last)
	{
		ft_printf("value : %i index : %i\n",last->value,last->index);
		last = last->next;
	}
}
int	ft_check(char *s)
{
	if (ft_string_isdigit(s) == 0)
		return (0);
	if (ft_atoi(s) <= -2147483648)
		return (0);
	return (1);
}