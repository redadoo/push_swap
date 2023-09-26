/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:49:20 by fborroto          #+#    #+#             */
/*   Updated: 2023/09/26 11:01:55 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_empty(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	if (i == 1 && (int)str[0] == 32)
		return (0);
	return (1);
}

static int	check_inside(char *str)
{
	int		i;
	long	j;
	char	**numbers;

	if (between_quoation(str) == 1 && check_empty(str) == 1)
	{
		i = -1;
		numbers = ft_split(str, ' ');
		while (numbers[++i])
		{
			j = ft_atoi(numbers[i], numbers);
			if (j <= -2147483649 || j >= 2147483648)
			{
				free_tab(numbers);
				ft_error("Error\n", NULL);
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
			j = ft_atoi(argv[i], NULL);
			if (j <= -2147483649 || j >= 2147483648)
				ft_error("Error\n", NULL);
		}
		else
			break ;
		i++;
	}
}

void	ft_check_double(t_stack *a, t_stack *b)
{
	t_stack	*tmp;
	t_stack	*new_a;

	new_a = a;
	tmp = new_a;
	while (new_a->next != NULL)
	{
		tmp = new_a->next;
		while (tmp != NULL)
		{
			if (new_a->value == tmp->value)
			{
				write(2, "Error\n", 7);
				ft_close(&a, &b);
			}
			tmp = tmp->next;
		}
		new_a = new_a->next;
	}
}

int	ft_check_order(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}
