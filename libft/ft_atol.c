/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::	  */
/*	 ft_atol.c											:+:		 :+:	:+:	  */
/*													  +:+ +:+		  +:+	  */
/*	 By: araveala <araveala@student.hive.fi>		+#+	 +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/04/16 16:20:19 by araveala		   #+#	  #+#			  */
/*   Updated: 2024/04/19 18:34:46 by araveala         ###   ########.fr       */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

long int	ft_atol(const char *str)
{
	int			save;
	long int	set_num;

	save = 1;
	set_num = 0;
	while (*str != '\0')
	{
		while ((*str > 8 && *str < 14) || *str == 32)
			str++;
		if (*str == '+' || *str == '-')
		{
			if (*str == '-')
				save = -1;
			str++;
		}
		while (ft_isdigit(*str) == 1)
		{
			set_num = set_num * 10 + *str - 48;
			str++;
		}
		return (set_num * save);
	}
	return (-2147483649);
}
