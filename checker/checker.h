/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:07:49 by edoardo           #+#    #+#             */
/*   Updated: 2023/07/21 17:05:12 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# define SA "sa\n"
# define RA "ra\n"
# define PA "pa\n"
# define RRA "rra\n"
# define SB "sb\n"
# define RB "rb\n"
# define PB "pb\n"
# define RRB "rrb\n"
# define RR "rr\n"
# define SS "ss\n"
# define RRR "rrr\n"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

t_stack	*ft_init_stack(char **list, int len_list);
void	ft_append_node(t_stack **head_ref, int new_value);
t_stack	*last_node(t_stack **head_ref);
void	delete_node(t_stack **head_ref, int s_index);
int		ft_execute_command(t_stack **a, t_stack **b);
int		ft_ascending(t_stack **a);
void	ft_sb(t_stack **b);
void	ft_pb(t_stack **a, t_stack **b);
void	ft_rb(t_stack **b);
void	ft_rrb(t_stack **b);
void	ft_sa(t_stack **a);
void	ft_pa(t_stack **a, t_stack **b);
void	ft_ra(t_stack **a);
void	ft_rra(t_stack **a);
void	ft_ss(t_stack **a, t_stack **b);
void	ft_rr(t_stack **a, t_stack **b);
void	ft_rrr(t_stack **a, t_stack **b);
int		ft_strlen(const char *s);
char	*get_next_line(int fd);
int		ft_check_command(char *str);
char	*ft_strjoin(char *backup, char *buff);
char	*ft_strchr(const char *s, int c);
char	*ft_backup(char *backup);
char	*ft_get_line(char *backup);

#endif
