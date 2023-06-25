/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:45:13 by evocatur          #+#    #+#             */
/*   Updated: 2023/06/21 16:34:09 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	small_sort(t_stack **a, t_stack **b)
{
	t_stack *temp_a;
	t_stack *temp_b;
	int     counter;
	
  temp_a = (*a);
	temp_b = (*b);
	
	counter = 0;

	while (last_node(&temp_a)->index != 1)
  {
    if (temp_a->value < temp_a->next->value)
    {
      printf(" \n primo if");
      ft_sa(&temp_a);
      ft_print_stack(&temp_a);
      ft_pb(&temp_a, &temp_b);
      ft_print_stack(&temp_a);
    }
    else if(temp_a->value > temp_a->next->value)
    {
      printf(" \n secondo if");
      ft_pb(&temp_a, &temp_b);
      ft_print_stack(&temp_a);
    }
    //temp_a = temp_a->next;
  }
  printf("\n    STACK B    \n");
  ft_print_stack(&temp_b);
}
