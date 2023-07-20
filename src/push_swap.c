/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:44:30 by evocatur          #+#    #+#             */
/*   Updated: 2023/07/16 00:41:42 by edoardo          ###   ########.fr       */
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
		ft_free_all(&a, &b);
		return (0);
	}
	push_swap(&a, &b);
	ft_free_all(&a, &b);
}

void	push_swap(t_stack **a, t_stack **b)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;

	tmp_a = (*a);
	tmp_b = (*b);
	if (last_node(&tmp_a)->index == 1)
		ft_sa(&tmp_a, 1);
	else if (last_node(&tmp_a)->index == 2)
		sorting_of_3(&tmp_a);
	else if (last_node(&tmp_a)->index <= 4)
		small_sort(&tmp_a, &tmp_b);
	else if (last_node(&tmp_a)->index <= 499)
		big_sort(&tmp_a, &tmp_b);
}
