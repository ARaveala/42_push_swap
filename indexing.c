/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::	  */
/*	 indexing.c											:+:		 :+:	:+:	  */
/*													  +:+ +:+		  +:+	  */
/*	 By: araveala <araveala@student.hive.fi>		+#+	 +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/04/03 15:00:34 by araveala		   #+#	  #+#			  */
/*   Updated: 2024/04/16 10:15:15 by araveala         ###   ########.fr       */
/*																			  */
/* ************************************************************************** */

#include "push_swap.h"

int	find_biggest(t_node **stack, t_attic box)
{
	t_node	*tmp;
	t_node	*big_loc;
	int		big;

	big = (*stack)->data;
	tmp = (*stack);
	big_loc = (*stack);
	box.i = -1;
	while (box.i++ < box.count)
	{
		if ((*stack)->data > big)
		{
			big = (*stack)->data;
			big_loc = (*stack);
		}
		if ((*stack)->next != NULL)
			(*stack) = (*stack)->next;
	}
	(*stack) = big_loc;
	(*stack)->index = box.count;
	(*stack) = tmp;
	return (big);
}

int	find_next(t_node **stack, t_attic box)
{
	t_node		*tmp;
	long int	small;

	tmp = (*stack);
	small = -2147483649;
	box.i = 0;
	box.x = 0;
	while (box.i >= 0 && box.i <= box.count)
	{
		while (tmp->index != -1 && tmp->next != NULL)
		{
			tmp = tmp->next;
			box.i++;
		}
		if (tmp->data > small && tmp->index == -1)
		{
			box.x = box.i;
			small = tmp->data;
		}
		if (tmp->next != NULL)
			tmp = tmp->next;
		box.i++;
	}
	return (box.x);
}

void	indexing(t_node **stack, t_attic box)
{
	t_node	*tmp;
//	int		big;

	tmp = (*stack);
//	big = find_biggest(stack, box);
	box.i = box.count - 1;
	box.x = 0;
	while (box.i > 0)
	{
		box.x = find_next(stack, box);
		while (box.x > 0)
		{
			(*stack) = (*stack)->next;
			box.x--;
		}
		(*stack)->index = box.i;
		box.i--;
		(*stack) = tmp;
	}
}
