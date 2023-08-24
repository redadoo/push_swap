/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:44:30 by evocatur          #+#    #+#             */
/*   Updated: 2023/08/24 16:20:58 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	int			len_stack;

	if (!argv)
	{
		write(2, "Error: list not found\n", 23);
		return (0);
	}
	if (ft_check_stack(argv) == 0)
		return (0);
	a = ft_init_stack(argv, argc);
	b = ft_init_stack(argv, 0);
	if (ft_ascending(&a) == 1)
	{
		printStack(&a);
		ft_free_all(&a, &b);
		return (0);
	}
	push_swap(&a, &b);
	ft_free_all(&a, &b);
	return (0);
}

void	push_swap(t_stack **a, t_stack **b)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;

	tmp_a = (*a);
	tmp_b = (*b);
	if (last_node(&tmp_a)->index == 1)
		ft_s(&tmp_a, 1);
	else if (last_node(&tmp_a)->index == 2)
		sorting_of_3(&tmp_a);
}

