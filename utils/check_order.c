/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:46:55 by evocatur          #+#    #+#             */
/*   Updated: 2023/05/04 12:22:49 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

int ft_ascending(t_stack **a)
{
    t_stack *temp;

    temp = *a;
    while (temp->next != NULL)
    {
        if (temp->value >= temp->next->value)
            temp = temp->next;
        else
            return (0);
    }
    return (1);
}


int ft_descending(t_stack **a)
{
    t_stack *temp;

    temp = *a;
    while (temp->next != NULL)
    {
        if (temp->value >= temp->next->value)
            temp = temp->next;
        else
            return (0);
    }
    return (1);
}
