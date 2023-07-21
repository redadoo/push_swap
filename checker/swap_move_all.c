/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:04:05 by evocatur          #+#    #+#             */
/*   Updated: 2023/07/21 16:22:20 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_ss(t_stack **a, t_stack **b)
{
	ft_sa(a);
	ft_sb(b);
}

void	ft_rr(t_stack **a, t_stack **b)
{
	ft_ra(a);
	ft_rb(b);
}

void	ft_rrr(t_stack **a, t_stack **b)
{
	ft_rra(a);
	ft_rrb(b);
}
