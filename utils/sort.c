/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:45:13 by evocatur          #+#    #+#             */
/*   Updated: 2023/05/04 14:48:25 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	sort(t_stack **a, t_stack **b, size_t len_stack)
{
    t_stack	*temp_a;
	t_stack	*temp_b;
	size_t	len;
	size_t	temp;

	temp_a = (*a);
	temp_b = (*b);
    

    ft_rotate(a);
    ft_print_stack(a);
    //while (temp_a->next != NULL)
    //{
    //    if(temp_a->value > temp_a->next->value)
    //    {
    //        ft_swap_sa(&temp_a);
    //    }
    //}
    
}
