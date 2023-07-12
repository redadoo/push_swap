/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utilities.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:44:43 by evocatur          #+#    #+#             */
/*   Updated: 2023/07/11 19:36:50 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void printArray(int *ptr, size_t length)      
{         
	size_t i = 0;
	for( ; i < length; ++i )      
	printf("\n %d  \n", ptr[i]);        
}   

void	ft_error(t_stack **head_ref)
{
	t_stack	*tmp;

	while (*head_ref != NULL)
	{
		tmp = *head_ref;
		*head_ref = (*head_ref)->next;
		tmp = NULL;
		free(tmp);
	}
	ft_printf("error\n");
	exit(0);
}

void	ft_print_stack(t_stack **a)
{
	t_stack	*last_a;

	last_a = *a;
	ft_printf(" Stack\n");
	ft_printf("----------------------------------- \n");
	while (last_a != NULL)
	{
		ft_printf("| value : %i index : %i | \n", last_a->value, last_a->index);
		last_a = last_a->next;
	}
	ft_printf("----------------------------------- \n");
}

int	ft_check(char *s)
{
	if (ft_string_isdigit(s) == 0)
	{
		return (0);
	}
	if (ft_atoi(s) <= -2147483648 || ft_atoi(s) >= 2147483647)
	{
		return (0);
	}
	return (1);
}

int	ft_check_stack(char **list)
{
	int		i;

	i = 1;
	if(!list)
	{
		write(2,"Error: list not found\n",23);
		return (0);
	}
	while (list[i])
	{
		if(ft_check(list[i]) == 0)
		{
			write(2,"Error: found a non int \n",25);
			return (0);
		}
		i++;
	}
	if (i <= 2)
	{
		write(2,"Error: list too small\n",23);
		return (0);
	}
	if (ft_double_check(list) == 0)
	{
		write(2,"Error: double number found\n",28);
		return (0);
	}
	return (1);
}

void	ft_free_all(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	while (*a != NULL)
	{
		tmp = *a;
		(*a) = (*a)->next;
		free(tmp);
		tmp = NULL;
	}
	if ((*b)->index == -1)
		free((*b));
}

t_stack	*find_smallest(t_stack **head_ref)
{
	t_stack *tmp;
	t_stack *smallest;
	int		n;
	int		i;
	tmp = (*head_ref);

	i = 0;
	n = tmp->value;
	smallest = tmp;
	while (tmp != NULL)
	{
		if (tmp->value < n)
		{
			n = tmp->value;
			smallest = tmp;
		}
		tmp = tmp->next;
	}
	return (smallest);
}

t_stack *find_bigger(t_stack **head_ref)
{
	t_stack *tmp;
	t_stack *bigger;
	int		n;

	tmp = (*head_ref);
	n = tmp->value;
	bigger = tmp;
	while (tmp != NULL)
	{
		if (tmp->value > n)
		{
			n = tmp->value;
			bigger = tmp;
		}
		tmp = tmp->next;
	}
	return (bigger);
}

int sorted_pos(t_stack **head_ref, int value)
{
	t_stack *tmp;
	int		n;

	tmp = (*head_ref);
	n = 0;
	while (tmp != NULL)
	{
		if (tmp->value > value)
			return (n);
		n++;
		tmp = tmp->next;
	}
	return (n);
}

void	print_list(char **matrix)
{
	char	*str;

	if (!matrix)
		return ;
	while (*matrix)
	{
		str = *matrix;
		ft_printf("%s", str);
		printf("\n");
		matrix++;
	}
	printf("\n");
	return ;
}

t_stack *find_median(t_stack **head_ref)
{
	int	i;
	int *array;
	int size;
	t_stack *tmp;

	tmp = (*head_ref);
	size = last_node(head_ref)->index + 1;
	array = malloc(size * sizeof(int));

	size = 0;
 	while (tmp->next != NULL)
	{
		array[size] = tmp->value;
		tmp = tmp->next;
		size++;
	}

	insertion_sort(array,last_node(head_ref)->index);

	//printArray(array,last_node(head_ref)->index);

	i = last_node(head_ref)->index / 2;

	tmp = (*head_ref);
	while(tmp->next != NULL)
	{
		if (tmp->value == array[i])
		{
			free(array);
			return (tmp);
		}
		tmp = tmp->next;
	}
	free(array);
	return (tmp);
	
}

void insertion_sort(int *arr,int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void	low_cost_push(t_stack **a,t_stack **b)
{
	int		i;
	int		j;
	int		len;

	len = last_node(b)->index + 1;
	i = find_bigger(b)->index;
	j = find_smallest(b)->index;
	i = i > (len / 2) ? (len - find_bigger(b)->index)  : find_bigger(b)->index;
	j = j > (len / 2) ? (len - find_smallest(b)->index)  : find_smallest(b)->index;
	
	if (i < j)
	{		
		if(i == find_bigger(b)->index)
		{
			while ((*b)->value != find_bigger(b)->value)
				ft_rb(b,1);				
		}
		else
		{
			while ((*b)->value != find_bigger(b)->value)
				ft_rrb(b,1);
		}
		ft_pa(a,b,1);
		return ;
	}
	else
	{
		if(j == find_smallest(b)->index)
		{
			while ((*b)->value != find_smallest(b)->value)
				ft_rb(b,1);				
		}
		else
		{
			while ((*b)->value != find_smallest(b)->value)
				ft_rrb(b,1);
		}
		ft_pa(a,b,1);
		ft_ra(a,1);
		return ;
	}
	if (find_smallest(b)->value == find_bigger(b)->value)
		ft_pa(a,b,1);
	if ((*a)->value > (*a)->next->value)
		ft_ra(a,1);
}

void	smart_push(t_stack **a, t_stack **b,int median)
{
	t_stack *tmp_a;
	int		n;
	int		x;
	int		len;

	len = last_node(a)->index + 1;
	tmp_a = (*a);
	n = -1;
	x = -1;
	while (tmp_a->next != NULL && tmp_a->index < (len / 2))
	{
		if (tmp_a->value < median)
		{
			n = tmp_a->index;
			break;
		}
		tmp_a = tmp_a->next;
	}
 	while (tmp_a != NULL)
	{
		if (tmp_a->value < median)
			x = tmp_a->index;
		tmp_a = tmp_a->next;
	}
	if (n < len - x && n != -1)
	{
		n = find_node_index(a,n)->value;
		while ((*a)->value != n)
			ft_ra(a,1);
		ft_pb(a,b,1);
	}	
	else if (x != -1)
	{
		x = find_node_index(a,x)->value;
		while ((*a)->value != x)
			ft_rra(a,1);
		ft_pb(a,b,1);
	}
} 

int pushed(t_stack **head_ref,int value)
{
	t_stack *tmp;

	tmp = (*head_ref);
	if (tmp == NULL)
		return (0);

 	while (tmp->next != NULL)
	{
		if (tmp->value < value)
		{
			return (1);
		}
		tmp = tmp->next;
	}
	if (tmp->value < value)
	{
		return (1);
	}
	return (0);
}

