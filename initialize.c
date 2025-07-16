/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:42:11 by araveala          #+#    #+#             */
/*   Updated: 2024/04/22 10:45:09 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_count_array(char *s, char c)
{
	int	count;
	int	on_off;
	int	i;

	i = 0;
	count = 0;
	on_off = 0;
	if (c == '\0')
		return (1);
	while (s[i] != '\0')
	{
		if (s[i] != c && on_off == 0)
		{
			on_off = 1;
			count++;
		}
		else if (s[i] == c)
			on_off = 0;
		i++;
	}
	if (count == 0)
		edward_error_hands(1);
	return (count);
}

long int	convert(char *string, t_node *list)
{
	long int	number;
	long int	error;

	error = -2147483649;
	number = 0;
	if (!string)
		return (error);
	number = ft_atol(string);
	if (number == error)
		return (error);
	if (int_error_check(number, list) == -1)
		return (error);
	return (number);
}

int	initialize(char *string, t_node **top)
{
	long int	number;
	long int	error;

	error = -2147483649;
	number = convert(string, *top);
	if (number == error)
	{
		edward_error_hands(4);
		return (-1);
	}
	insert_node(top, number);
	return (0);
}
