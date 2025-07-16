/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:03:59 by araveala          #+#    #+#             */
/*   Updated: 2024/04/22 11:21:26 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	quick_check(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == '-' || string[i] == '+')
		{
			i++;
			if (ft_isdigit(string[i]) == 0)
				edward_error_hands(3);
		}
		if (ft_isdigit(string[i]) == 0)
		{
			if (string[i] != 32 || string[i] != '\0')
				edward_error_hands(3);
		}
		i++;
	}
	if (i > 11)
		edward_error_hands(3);
	return (1);
}

int	int_error_check(long int number, t_node *list)
{
	int	maxi;
	int	mini;

	maxi = 2147483647;
	mini = -2147483648;
	if (number > maxi || number < mini)
		return (-1);
	while (list != NULL)
	{
		if (list->data == number)
			return (-1);
		list = list->next;
	}
	return (1);
}

void	edward_error_hands(int x)
{
	if (x == 1)
	{
		ft_printf("Error\n");
		exit (1);
	}
	if (x == 2)
	{
		ft_printf("Error\n");
		exit (1);
	}
	if (x == 3)
	{
		ft_printf("Error\n");
		exit (1);
	}
	if (x == 4)
	{
		ft_printf("Error\n");
		exit (1);
	}
	if (x == 5)
		exit(1);
}
