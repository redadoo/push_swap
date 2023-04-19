/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:44:30 by evocatur          #+#    #+#             */
/*   Updated: 2023/04/19 17:01:17 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int main(int argc,char **argv)
{
    push_swap(argc,argv);
}

void push_swap(int argc,char **argv)
{
    stack *a;
    stack *b;

    a = ft_make_stack(argv,argc);
}
