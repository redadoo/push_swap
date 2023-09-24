/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:17:30 by evocatur          #+#    #+#             */
/*   Updated: 2023/09/24 03:09:21 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"
#include <stdio.h>

char	*get_next_line(int fd);

static int	cmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] == '\0' && (unsigned char)s2[i] == '\0')
			return (0);
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

int	exe_command(char *str, t_stack	**a, t_stack	**b)
{
	if (cmp(str, "sa\n", 4) == 0)
		swap_n(a, 3);
	else if (cmp(str, "sb\n", 4) == 0)
		swap_n(b, 3);
	else if (cmp(str, "ra\n", 4) == 0)
		rotate_n(a, 3);
	else if (cmp(str, "rb\n", 4) == 0)
		rotate_n(b, 3);
	else if (cmp(str, "rra\n", 5) == 0)
		rotate_rotate_n(a, 3);
	else if (cmp(str, "rrb\n", 5) == 0)
		rotate_rotate_n(b, 3);
	else if (cmp(str, "pa\n", 4) == 0)
		push_n(b, a, 3);
	else if (cmp(str, "pb\n", 4) == 0)
		push_n(a, b, 3);
	else if (cmp(str, "rr\n", 4) == 0)
		ft_rotate_rotate(a, b, 3);
	else if (cmp(str, "rrr\n", 5) == 0)
		rotate_rotate_rotate(a, b, 3);
	else if (cmp(str, "ss\n", 4) == 0)
		ft_swap_swap(a, b, 3);
	else
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	*str;

	b = NULL;
	if (argc == 1)
		return (0);
	ft_check_arg(argv, argc);
	ft_init(&a, argv, argc);
	ft_check_double(a, b);
	while ((str = get_next_line(STDIN_FILENO)))
	{
		if(exe_command(str, &a, &b) == 0)
			break;
	}
	if (ft_check_order(a) == 1)
		write(1, "OK\n", 4);
	else
		write(1, "KO\n", 4);
	ft_close(&a, &b);
}
