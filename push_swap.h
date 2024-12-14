/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kubra <kubra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:21:19 by kgulfida          #+#    #+#             */
/*   Updated: 2024/06/11 14:34:41 by kubra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int		data;
	int		index;
	struct s_stack	*next;
}			t_stack;

// Instruction functions
void	ft_pa(t_stack **stack_a, t_stack **stack_b);
void	ft_pb(t_stack **stack_a, t_stack **stack_b);

void	ft_rra(t_stack **stack_a);
void	ft_rrb(t_stack **stack_b);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b);

void	ft_ra(t_stack **stack_a);
void	ft_rb(t_stack **stack_b);
void	ft_rr(t_stack **stack_a, t_stack **stack_b);

void	ft_sa(t_stack **stack_a);
void	ft_sb(t_stack **stack_b);
void	ft_ss(t_stack **stack_a, t_stack **stack_b);

// Stack utils
void	ft_lstadd_back(t_stack **lst, t_stack *new);
int		ft_lstsize(t_stack *lst);
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_lstnew(int content);

// Algorithm utils
void	ft_check_av(int ac, char **av);
void	index_stack(t_stack **stack);
int		ft_issort(t_stack **stack);

// Sort utils
void	sort_stack(t_stack **stack_a, t_stack **stack_b);
void	radix_sort(t_stack **stack_a, t_stack **stack_b);
t_stack	*max_node(t_stack **stack);
t_stack	*min_node(t_stack **stack);

#endif