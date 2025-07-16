/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:01:15 by araveala          #+#    #+#             */
/*   Updated: 2023/12/20 11:49:43 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printnum(long long n, t_check *check)
{
	if (n < 0)
	{
		ft_printchar('-', check);
		n = n * -1;
	}
	if (n > 9)
	{
		ft_printnum(n / 10, check);
		ft_printnum(n % 10, check);
	}
	else
		ft_printchar(n + 48, check);
}
