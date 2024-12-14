/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:49:30 by kgulfida          #+#    #+#             */
/*   Updated: 2024/05/27 13:51:48 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_rotate(t_stack **stack)
{
	t_stack *start;
	t_stack *last;

	if(*stack == NULL || (*stack) -> next == NULL)
		return(-1);
	start = *stack;
	last = ft_lstlast(start);
	*stack = start->next;
	start->next = NULL;
	last->next = start;
	return(0);
}

void    ft_ra(t_stack **stack_a)
{
	ft_rotate(stack_a);
    write(1, "ra\n", 3);
}

void    ft_rb(t_stack **stack_b)
{
	ft_rotate(stack_b);
    write(1, "rb\n", 3);
}

void    ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
    write(1, "rr\n", 3);
}
