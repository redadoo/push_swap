/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utilities.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:44:43 by evocatur          #+#    #+#             */
/*   Updated: 2023/04/19 16:04:52 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int ft_return_int(char *n)
{
	return (ft_atoi(n));
}

void ft_error(void)
{
	ft_printf("error\n");
}
