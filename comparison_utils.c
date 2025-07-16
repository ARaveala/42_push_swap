/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::	  */
/*	 comparison_utils.c									:+:		 :+:	:+:	  */
/*													  +:+ +:+		  +:+	  */
/*	 By: araveala <araveala@student.hive.fi>		+#+	 +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/03/27 12:29:12 by araveala		   #+#	  #+#			  */
/*   Updated: 2024/04/19 19:36:07 by araveala         ###   ########.fr       */
/*																			  */
/* ************************************************************************** */

#include "push_swap.h"

static t_node	*get_the_end(t_node **stack)
{
	t_node	*tmp;

	if ((*stack)->next == NULL || (*stack) == NULL)
		return (NULL);
	tmp = (*stack);
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (&*tmp);
}

int	compare_biggest_tips(t_node **stk)
{
	t_node	*end;

	end = get_the_end(stk);
	if (end == NULL)
		return (-1);
	if ((*stk)->data > (*stk)->next->data)
	{
		if (end->data > end->prev->data)
		{
			if ((*stk)->data > end->data)
				return (1);
			return (3);
		}
		if ((*stk)->data > end->prev->data)
			return (1);
	}
	else if (end->data > end->prev->data)
	{
		if ((*stk)->next->data < end->data)
			return (2);
		return (3);
	}
	if ((*stk)->next->data >= end->prev->data)
		return (2);
	return (4);
}

int	compare_smallest_tips(t_node **stk)
{
	t_node	*end;

	end = get_the_end(stk);
	if (end == NULL)
		return (-1);
	if ((*stk)->data < (*stk)->next->data)
	{
		if (end->data < end->prev->data)
		{
			if ((*stk)->data < end->data)
				return (1);
			return (3);
		}
		if ((*stk)->data < end->prev->data)
			return (1);
	}
	else if (end->data < end->prev->data)
	{
		if ((*stk)->next->data < end->data)
			return (2);
		return (3);
	}
	if ((*stk)->next->data < end->prev->data)
		return (2);
	return (4);
}
