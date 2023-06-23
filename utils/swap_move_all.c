/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:04:05 by evocatur          #+#    #+#             */
/*   Updated: 2023/06/21 15:01:13 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void    ft_ss(t_stack **a, t_stack **b)
{
    ft_sa(a);
    ft_sb(b);
}

void    ft_rr(t_stack **a, t_stack **b)
{
    ft_ra(a);
    ft_rb(b);
}

void    ft_rrr(t_stack **a, t_stack **b)
{
    ft_rra(a);
    ft_rrb(b);
}