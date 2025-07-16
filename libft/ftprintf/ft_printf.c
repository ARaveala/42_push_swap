/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:18:48 by araveala          #+#    #+#             */
/*   Updated: 2024/02/16 09:33:14 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_format_check(va_list args, char input, t_check *check)
{
	if (input == 'c')
		ft_printchar(va_arg(args, int), check);
	else if (input == 's')
		ft_printstr(va_arg(args, char *), check);
	else if (input == 'u')
		ft_print_unsigned_num(va_arg(args, unsigned int), check);
	else if (input == 'p')
		ft_printhex_ptr(va_arg(args, unsigned long long), check);
	else if (input == 'd' || input == 'i')
		ft_printnum(va_arg(args, int), check);
	else if (input == 'x' || input == 'X')
		ft_printhex(va_arg(args, unsigned int), check, input);
	else if (input != '\0')
		ft_printchar(input, check);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	t_check	check;

	check.count = 0;
	check.error = 0;
	va_start(args, input);
	while (*input && check.error == 0)
	{
		if (*input == '%')
		{
			input++;
			ft_format_check(args, *input, &check);
		}
		else if (*input != '\0')
			ft_printchar(*input, &check);
		if (*input != '\0')
			input++;
	}
	va_end(args);
	if (check.error < 0)
		return (-1);
	return (check.count);
}
