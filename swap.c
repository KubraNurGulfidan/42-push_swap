/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:42:07 by kgulfida          #+#    #+#             */
/*   Updated: 2024/05/27 13:59:35 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_swap(t_stack **stack)
{
	t_stack *start;
	t_stack *second;
	int		temp_data;
	
	if(*stack == NULL || (*stack)->next == NULL)
		return(-1);
	start = *stack;
	second = start->next;
	temp_data = start->data;
	start->data = second->data;
	second->data = temp_data;
	return(0);
}

void    ft_sa(t_stack **stack_a)
{
	ft_swap(stack_a);
    write(1, "sa\n", 3);
}

void sb(t_stack **stack_b)
{
	ft_swap(stack_b);
    write(1, "sb\n", 3);
}

void ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
    write(1, "ss\n", 3);
}
