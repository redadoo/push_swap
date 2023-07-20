/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:04:05 by evocatur          #+#    #+#             */
/*   Updated: 2023/07/13 19:26:50 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	ft_ss(t_stack **a, t_stack **b)
{
	ft_sa(a, 0);
	ft_sb(b, 0);
	ft_printf("ss\n");
}

void	ft_rr(t_stack **a, t_stack **b)
{
	ft_ra(a, 0);
	ft_rb(b, 0);
	ft_printf("rr\n");
}

void	ft_rrr(t_stack **a, t_stack **b)
{
	ft_rra(a, 0);
	ft_rrb(b, 0);
	ft_printf("rrr\n");
}
