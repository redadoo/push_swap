/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:44:30 by evocatur          #+#    #+#             */
/*   Updated: 2023/04/20 16:06:34 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	push_swap(argc, argv);
}

void	push_swap(int argc, char **argv)
{
	t_stack		*a;
	size_t		len_stack;

	a = ft_make_stack(argv, argc);
	len_stack = last_node(&a)->index;
	if (len_stack < 100)
		insertion_sort(&a, len_stack);
	ft_print_stack(&a);
}
