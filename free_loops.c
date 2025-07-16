/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::	  */
/*	 free_loops.c										:+:		 :+:	:+:	  */
/*													  +:+ +:+		  +:+	  */
/*	 By: araveala <araveala@student.hive.fi>		+#+	 +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/02/28 14:48:27 by araveala		   #+#	  #+#			  */
/*   Updated: 2024/04/16 10:04:57 by araveala         ###   ########.fr       */
/*																			  */
/* ************************************************************************** */

#include "push_swap.h"

void	free_array(char **array, int count)
{
	int	i;
	int	loc;

	i = 0;
	loc = count + 1;
	while (i < loc)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

void	free_stack(t_node *top)
{
	t_node	*tmp;

	if (top->next == NULL)
		free(top);
	while (top->next != NULL)
	{
		tmp = top;
		top = top->next;
		free(tmp);
	}
	free(top);
	top = NULL;
}
