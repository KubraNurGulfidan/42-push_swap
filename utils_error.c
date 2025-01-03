/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kubra <kubra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:27:42 by kgulfida          #+#    #+#             */
/*   Updated: 2024/06/11 14:39:24 by kubra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_error(void)
{
	write(1, "Error", 5);
	exit(0);
}
static int ft_isnum(char *num)
{
	int i;

	i = 0;
	if(num[i] == '-' || num[i] == '+')
	{
		i++;
		if(num[i] < '0' || num[i] > '9')
			return (0);	
	}
	while (num[i])
	{
		if(num[i] < '0' || num[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static int ft_issame(int number, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if(ft_atoi(argv[i]) == number)
			return (1);
		i++;
	}
	return (0);
}

void ft_check_av(int ac, char **av)
{
	int i;
	long number;
	char **argv;

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
		if(!(ft_isnum(argv[i])))
			ft_error();
		number = ft_atoi(argv[i]);
		if(number < -2147483648 || number > 2147483647)
			ft_error();
		if(ft_issame(number, argv, i))
			ft_error();
		i++;
		}
}
