/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utilities.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:44:43 by evocatur          #+#    #+#             */
/*   Updated: 2023/04/19 16:51:44 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void ft_error(void)
{
	ft_printf("error\n");
}
void ft_make_stack(char **list,int len_list)
{
	int i;
	stack* top;
	 
	top = NULL;
	top = (stack*)malloc(sizeof(stack*));
	if (!top)
		return ;
	i = 1;
	while (i < len_list)
	{
		ft_append_node(&top,ft_atoi(list[i]),i - 1);
		i++;
	}
	ft_print_stack(&top);
}

void ft_append_node(stack **head_ref, int new_value, int new_index)
{
	stack *new_node;
	stack *last;

	last = *head_ref;
	new_node = NULL;
	new_node = (stack*)malloc(sizeof(stack*));
	if (!new_node)
		return ;
	new_node->value = new_value;
	new_node->index = new_index;

	if (last == NULL)
	{
		last = new_node;
		return ;
	}
	while (last->next)
	{
		last = last->next;
	}
	
	last->next = new_node;
}
void ft_print_stack(stack **head_ref)
{
	stack *last;

	last = *head_ref;

	while (last)
	{
		printf("%i %i\n",last->value,last->index);
		last = last->next;
	}
}