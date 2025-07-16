/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:55:21 by araveala          #+#    #+#             */
/*   Updated: 2024/03/04 11:56:24 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

typedef struct s_check
{
	int	error;
	int	count;
}				t_check;

int		ft_printf(const char *input, ...);

void	ft_printchar(char c, t_check *check);
void	ft_print_unsigned_num(unsigned int n, t_check *check);
void	ft_printnum(long long n, t_check *check);
void	ft_printstr(char *s, t_check *check);
void	ft_printhex(unsigned long num, t_check *check, char format);
void	ft_printhex_ptr(unsigned long long ptr, t_check *check);

#endif
