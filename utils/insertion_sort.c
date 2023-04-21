/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:45:13 by evocatur          #+#    #+#             */
/*   Updated: 2023/04/20 15:44:10 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	insertion_sort(t_stack **a, size_t len_stack)
{
	t_stack	*_a;
	t_stack	*_c;
	size_t	_len;
	size_t	_len2;

	_len2 = len_stack;
	_len = len_stack;
	_a = *a;
	while (len_stack)
	{
		_c = _a;
		while (_len)
		{
			if (_c != NULL && _c->next != NULL && _c->value > _c->next->value)
				ft_swap_a(&_c);
			_c = _c->next;
			_len--;
		}
		_len = _len2;
		len_stack--;
	}
}
