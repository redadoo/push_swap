/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:45:13 by evocatur          #+#    #+#             */
/*   Updated: 2023/06/26 20:00:11 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	small_sort(t_stack **a, t_stack **b)
{
	t_stack *temp_a;
	t_stack *temp_b;
	size_t   len;
	int       temp_value2;
  temp_a = (*a);
	temp_b = (*b);

  temp_value2 = last_node(&temp_a)->index; 
  while (temp_value2)
  {
    len = last_node(&temp_a)->index;
    while (len)
    {
      if (temp_a->value < temp_a->next->value)
        ft_ra(&temp_a);
      else if (temp_a->value > temp_a->next->value)
      {
        ft_sa(&temp_a);
        ft_ra(&temp_a);
      }
      len--;
    }
    ft_ra(&temp_a);
    temp_value2--;
  }
}
