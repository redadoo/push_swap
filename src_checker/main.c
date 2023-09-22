/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:17:30 by evocatur          #+#    #+#             */
/*   Updated: 2023/09/22 18:16:11 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"
#include <stdio.h>

char	*get_next_line(int fd);

static int	cmp(char *str, char *str1)
{
	int i;

	i = 0;

	(void)i;
	if (((!str && !str1) || (ft_strlen(str) == ft_strlen(str1))))
		return (1);
	return (0);
}

static	void	exe_command(char *str, t_stack	**a, t_stack	**b)
{
	if (cmp(str, "sa\n") == 1)
		swap_n(a,3);
	else if (cmp(str, "sb\n") == 1)
		swap_n(b,3);
	else if (cmp(str,"ra\n") == 1)
		swap_n(b,3);
	else if (cmp(str,"rb\n") == 1)
		swap_n(b,3);
	else if (cmp(str,"rra\n") == 1)
		swap_n(b,3);
	else if (cmp(str,"rrb\n") == 1)
		swap_n(b,3);
	else if (cmp(str,"pa\n") == 1)
		swap_n(b,3);
	else if (cmp(str,"pb\n") == 1)
	else if (cmp(str,"rr\n") == 1)
		ft_rotate_rotate(a, b, 3);
	else if (cmp(str,"rrr\n") == 1)
		rotate_rotate_rotate(a, b, 3);
	else if (cmp(str,"ss\n") == 1)
		ft_swap_swap(a, b, 3);
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
	ft_check_double(a);
	str = get_next_line(STDIN_FILENO);
	while (str != 0)
	{
		exe_command(str, &a, &b);
		str = get_next_line(STDIN_FILENO);
	}
	if (ft_check_order(a) == 1)
		write(1,"OK\n",4);
	else
		write(1,"KO\n",4);	
	ft_close(&a, &b);
}
