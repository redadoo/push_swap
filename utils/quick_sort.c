/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:27:17 by evocatur          #+#    #+#             */
/*   Updated: 2023/05/04 10:00:00 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void quick_sort(t_stack **a, t_stack **b, size_t len_stack)
{
	int		temp_value;	
	size_t	_len;
	t_stack	*_a;
	t_stack	*_c;

	b = NULL;
	_len = len_stack;
	_a = (*a);
	while (len_stack)
	{
		_c = _a;
		temp_value = _c->value;
		while (_len)
		{
			_c = _c->next;
			if(temp_value > _c->value)
			{

			}
			_len--;
		}
		_a = _a->next;
		len_stack--;
	}
}