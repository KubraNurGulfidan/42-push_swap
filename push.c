/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:48:49 by kgulfida          #+#    #+#             */
/*   Updated: 2024/06/05 15:33:49 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_push(t_stack **stack_to, t_stack **stack_from)
{
	t_stack *iter;
	t_stack *root_to;
    
    if(*stack_from == NULL)
        return(-1);
    root_to = *stack_to;
    iter = *stack_from;
    *stack_from = (*stack_from)->next;
    if(stack_to == NULL)
    {
        root_to = iter;
        root_to->next = NULL;
        *stack_to = root_to;
    }
    else
    {
        iter->next = root_to;
        *stack_to = iter;
    }
    return(0);
}

void    ft_pa(t_stack **stack_a, t_stack **stack_b)
{
    ft_push(stack_a, stack_b);
    write(1, "pa\n", 3);
}

void    ft_pb(t_stack **stack_a, t_stack **stack_b)
{
    ft_push(stack_b, stack_a);
    write(1, "pb\n", 3);   
}
