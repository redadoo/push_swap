/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:05:58 by edoardo           #+#    #+#             */
/*   Updated: 2023/07/21 17:02:54 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	int			len_stack;

	if (!argv)
		return (0);
	a = ft_init_stack(argv, argc);
	b = ft_init_stack(argv, 0);
	if (ft_ascending(&a) == 1)
	{
		ft_free_all(&a, &b);
		return (0);
	}
	if (ft_execute_command(&a, &b) == 0)
		return (0);
	if (b->index == -1 || ft_ascending(&a) != 1)
		write(1, "KO", 3);
	else
		write(1, "OK", 3);
}
