/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:33:25 by araveala          #+#    #+#             */
/*   Updated: 2023/12/20 11:50:02 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printstr(char *s, t_check *check)
{
	if (s == NULL)
	{
		ft_printstr("(null)", check);
		return ;
	}
	while (*s != '\0')
	{
		ft_printchar(*s, check);
		s++;
	}
}
