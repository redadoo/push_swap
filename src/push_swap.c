/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:44:30 by evocatur          #+#    #+#             */
/*   Updated: 2023/05/04 11:37:14 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc > 1)
		push_swap(argc - 1, argv);
}

void	push_swap(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	size_t		len_stack;

	a = ft_make_stack(argv, argc);
	len_stack = last_node(&a)->index;
	ft_print_stack(&a);
	if (len_stack < 100)
		insertion_sort(&a, &b, len_stack);
	else
		quick_sort(&a, &b, len_stack);
	ft_print_stack(&a);
}
