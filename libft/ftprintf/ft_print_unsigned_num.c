/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_num.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:33:42 by araveala          #+#    #+#             */
/*   Updated: 2023/12/20 11:47:31 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned_num(unsigned int n, t_check *check)
{
	if (n > 9)
	{
		ft_print_unsigned_num(n / 10, check);
		ft_print_unsigned_num(n % 10, check);
	}
	else
		ft_printchar(n + 48, check);
}
