/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:49:20 by fborroto          #+#    #+#             */
/*   Updated: 2023/09/22 13:22:52 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_inside(char *str)
{
	int		i;
	long	j;
	char	**numbers;

	if (between_quoation(str) == 1)
	{
		numbers = ft_split(str, ' ');
		while (numbers[++i])
		{
			j = ft_atoi(numbers[i]);
			if (j <= -2147483649 || j >= 2147483648)
			{
				free_tab(numbers);
				ft_error("Error\n");
			}
		}
		free_tab(numbers);
		return (1);
	}
	return (0);
}

void	ft_check_arg(char **argv, int argc)
{
	int		i;
	long	j;

	i = 1;
	while (argv[i])
	{
		if (i < argc && check_inside(argv[i]) == 1)
			i++;
		else if (i < argc)
		{
			j = ft_atoi(argv[i]);
			if (j <= -2147483649 || j >= 2147483648)
				ft_error("Error\n");
		}
		else
			break ;
		i++;
	}
}

void	ft_check_double(t_stack *a)
{
	t_stack	*tmp;

	tmp = a;
	while (a->next != NULL)
	{
		tmp = a->next;
		while (tmp != NULL)
		{
			if (a->value == tmp->value)
			{
				ft_error("Error\n");
			}
			tmp = tmp->next;
		}
		a = a->next;
	}
}
