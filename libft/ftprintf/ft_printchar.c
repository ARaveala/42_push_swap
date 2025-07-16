/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:52:17 by araveala          #+#    #+#             */
/*   Updated: 2023/12/20 11:47:49 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printchar(char c, t_check *check)
{
	if (check->error < 0)
		return ;
	if (write (1, &c, 1) < 0)
		check->error = -1;
	else
		check->count++;
}
