/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_isdigit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:24:28 by evocatur          #+#    #+#             */
/*   Updated: 2023/07/16 01:16:22 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_string_isdigit(char *c)
{
	int	i;

	i = 0;
	while (*c)
	{
		if ((int)*c == 45)
			i++;
		if (i > 1)
			return (0);
		else if ((int)*c != 45 && ((int)*c < 48 || (int)*c > 57))
		{
			return (0);
		}
		c++;
	}
	return (1);
}
