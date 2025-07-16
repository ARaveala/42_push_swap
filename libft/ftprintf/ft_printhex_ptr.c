/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex_ptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:06:49 by araveala          #+#    #+#             */
/*   Updated: 2023/12/20 11:49:26 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhex_ptr(unsigned long long ptr, t_check *check)
{
	ft_printstr("0x", check);
	if (ptr == 0)
		ft_printchar('0', check);
	else
		ft_printhex(ptr, check, 'x');
}
