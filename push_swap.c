/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kubra <kubra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:20:57 by kgulfida          #+#    #+#             */
/*   Updated: 2024/06/11 15:29:37 by kubra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void fill_stack(t_stack **stack, int ac, char **av)
{
	int i;
	char **argv;
	t_stack *new;

	i = 0;	
	if(ac == 2)
		argv = ft_split(av[1], ' ');
	else
	{
		i = 1;
		argv = av;
	}
	while (argv[i])
	{
		new = ft_lstnew(ft_atoi(argv[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
}

int ft_issort(t_stack **stack)
{
	t_stack *node;

	node = *stack;
	while (node != NULL && node->next != NULL)
	{
		if(node->data > node->next->data)
			return(0);
		node = node->next;
	}
	return(1);
}

static void	free_stack(t_stack **stack)
{
	t_stack *node;
	t_stack *temp;
	
	node = *stack;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	free(stack);
}

int main(int ac, char **av)
{
	t_stack **stack_a;
	t_stack **stack_b;
	
	if(ac < 2)
		return(-1);
	ft_check_av(ac, av);

	stack_a = (t_stack **)malloc(sizeof(t_stack));
	stack_b = (t_stack **)malloc(sizeof(t_stack));
	*stack_a = NULL;
	*stack_b = NULL;
	fill_stack(stack_a, ac, av);
	index_stack(stack_a);
	if(ft_issort(stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return(0);
	}
	sort_stack(stack_a, stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return(0);
}
