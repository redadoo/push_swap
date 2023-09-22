/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:59:12 by fborroto          #+#    #+#             */
/*   Updated: 2023/09/22 18:21:33 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_list_len(t_stack *stack)
{
	if (!stack)
		return (0);
	while (stack->next != NULL)
		stack = stack->next;
	return (stack->index);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	b = NULL;
	if (argc == 1)
		return (0);
	ft_check_arg(argv, argc);
	ft_init(&a, argv, argc);
	ft_check_double(&a, &b);
	if (ft_check_order(a) == 1)
	{
		ft_close(&a, &b);
	}
	else
	{
		if (ft_list_len(a) + 1 == 2)
			swap_n(&a, 1);
		else if (ft_list_len(a) + 1 == 3)
			ft_sort3(&a);
		else
			ft_big_sort(&a, &b);
		ft_close(&a, &b);
	}
	return (0);
}
