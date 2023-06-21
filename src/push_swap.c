/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:44:30 by evocatur          #+#    #+#             */
/*   Updated: 2023/06/21 14:59:11 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc >= 1)
		push_swap(argc, argv);
}

void	push_swap(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	size_t		len_stack;

	a = ft_init_stack(argv, argc);
	//init stack b
	len_stack = last_node(&a)->index;
	if (len_stack < 5)
	 	small_sort(&a, &b, len_stack);
}
