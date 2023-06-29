/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:44:30 by evocatur          #+#    #+#             */
/*   Updated: 2023/06/28 15:15:00 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		return (0);
	}
	if (ft_check_stack(argv) == 0)
	{
		return (0);
	}
	else
	{
		push_swap(argc, argv);
	}
}

void	push_swap(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	size_t		len_stack;

	a = ft_init_stack(argv, argc);
	b = ft_init_stack(argv, 0);
	if (ft_ascending(&a) == 1)
	{
		return ;
	}
	sort(&a,&b);
	ft_free_all(&a,&b);
}
