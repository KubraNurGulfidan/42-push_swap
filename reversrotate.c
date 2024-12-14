/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reversrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:50:32 by kgulfida          #+#    #+#             */
/*   Updated: 2024/05/27 13:51:41 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_reverse_rotate(t_stack **stack)
{
	t_stack *iter;
	t_stack *last;
	
	if(*stack == NULL || (*stack)->next == NULL)
		return(-1);
	iter = *stack;
	last = ft_lstlast(iter);
	while (iter != NULL)
	{
		if(iter->next->next == NULL)
		{
			iter->next = NULL;
			break;
		}
		iter = iter->next;
	}
	last->next = *stack;
	*stack = last;	
	return(0);
}

void    ft_rra(t_stack **stack_a)
{
	ft_reverse_rotate(stack_a);
    write(1, "rra\n", 4);
}

void    ft_rrb(t_stack **stack_b)
{
	ft_reverse_rotate(stack_b);
    write(1, "rrb\n", 4);
}

void    ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
    write(1, "rrr\n", 4);
}
