/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_util.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:09:48 by edoardo           #+#    #+#             */
/*   Updated: 2023/07/21 17:13:09 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_stack	*ft_init_stack(char **list, int len_list)
{
	int			i;
	t_stack		*top;

	top = NULL;
	i = 1;
	if (len_list == 0)
	{
		top = malloc(sizeof(t_stack *));
		if (!top)
			return (NULL);
		top->index = -1;
		return (top);
	}
	while (i < len_list)
	{
		ft_append_node(&top, ft_atoi(list[i]));
		i++;
	}
	return (top);
}

int	ft_ascending(t_stack **a)
{
	t_stack	*temp;

	temp = *a;
	while (temp->next != NULL)
	{
		if (temp->value < temp->next->value)
			temp = temp->next;
		else
			return (0);
	}
	return (1);
}

static	void	ft_command(char *str, t_stack **a, t_stack **b)
{
	if (str == SA)
		ft_sa(a);
	if (str == RA)
		ft_ra(a);
	if (str == PA)
		ft_pa(a, b);
	if (str == RRA)
		ft_rra(a);
	if (str == SB)
		ft_sb(b);
	if (str == RB)
		ft_rb(b);
	if (str == PB)
		ft_pb(a, b);
	if (str == RRB)
		ft_rrb(b);
	if (str == RR)
		ft_rr(a, b);
	if (str == SS)
		ft_ss(a, b);
	if (str == RRR)
		ft_rrr(a, b);
}

int	ft_execute_command(t_stack **a, t_stack **b)
{
	char	*str;

	str = get_next_line(STDOUT_FILENO);
	while (str != NULL)
	{
		if (ft_check_command(str) == 0)
			return (0);
		ft_command(str, a, b);
	}
	return (1);
}

int	ft_check_command(char *str)
{
	int		i;
	char	*arr[10];

	arr[0] = SA;
	arr[1] = RA;
	arr[2] = PA;
	arr[3] = RRA;
	arr[4] = SB;
	arr[5] = RB;
	arr[6] = PB;
	arr[7] = RRB;
	arr[8] = SS;
	arr[9] = RR;
	arr[10] = RRR;
	i = 0;
	while (arr[i])
	{
		if (str == arr[i])
			return (1);
		i++;
	}
	return (0);
}
