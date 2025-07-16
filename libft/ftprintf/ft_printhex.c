/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:15:41 by araveala          #+#    #+#             */
/*   Updated: 2023/12/20 11:49:11 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhex(unsigned long num, t_check *check, char format)
{
	int	x;

	x = 97;
	if (format == 'X')
		x = 65;
	if (num > 15)
	{
		ft_printhex(num / 16, check, format);
		ft_printhex(num % 16, check, format);
	}
	else
	{
		if (num < 10)
			ft_printchar(num + 48, check);
		else
			ft_printchar(num - 10 + x, check);
	}
}
