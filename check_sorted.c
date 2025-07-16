/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::	  */
/*	 check_sorted.c										:+:		 :+:	:+:	  */
/*													  +:+ +:+		  +:+	  */
/*	 By: araveala <araveala@student.hive.fi>		+#+	 +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/03/07 09:41:14 by araveala		   #+#	  #+#			  */
/*   Updated: 2024/04/16 10:03:09 by araveala         ###   ########.fr       */
/*																			  */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorted(t_node *stack)
{
	t_node	*cellar;
	int		flag;
	int		temp;

	flag = 0;
	temp = stack->data;
	cellar = stack->next;
	while (temp < cellar->data && cellar->next != NULL)
	{
		temp = cellar->data;
		cellar = cellar->next;
	}
	if (temp > cellar->data)
		flag = -1;
	return (flag);
}
