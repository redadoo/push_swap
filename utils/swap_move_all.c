/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:04:05 by evocatur          #+#    #+#             */
/*   Updated: 2023/08/24 15:43:57 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	ft_ss(t_stack **a, t_stack **b)
{
	ft_s(a, 0);
	ft_s(b, 0);
	ft_printf("ss\n");
}

void	ft_rr(t_stack **a, t_stack **b)
{
	ft_r(a, 0);
	ft_r(b, 0);
	ft_printf("rr\n");
}

void	ft_rrr(t_stack **a, t_stack **b)
{
	ft_rrx(a, 0);
	ft_rrx(b, 0);
	ft_printf("rrr\n");
}
