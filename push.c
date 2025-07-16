/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::	  */
/*	 push.c												:+:		 :+:	:+:	  */
/*													  +:+ +:+		  +:+	  */
/*	 By: araveala <araveala@student.hive.fi>		+#+	 +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/03/21 15:46:23 by araveala		   #+#	  #+#			  */
/*   Updated: 2024/04/16 10:23:02 by araveala         ###   ########.fr       */
/*																			  */
/* ************************************************************************** */

#include "push_swap.h"

static void	pa_helper(t_node **stack_a, t_node *tmp)
{
	(*stack_a)->head = tmp;
	(*stack_a)->prev = (*stack_a)->head;
	(*stack_a)->head->next = (*stack_a);
	(*stack_a) = (*stack_a)->head;
	(*stack_a)->prev = NULL;
}

void	pa(t_node **stack_b, t_node **stack_a)
{
	t_node	*tmp;

	tmp = (*stack_b);
	if ((*stack_b) == NULL)
		return ;
	if ((*stack_b)->next == NULL)
	{
		pa_helper(stack_a, tmp);
		(*stack_b) = NULL;
		ft_printf("pa\n");
		return ;
	}
	(*stack_b)->head = (*stack_b)->next;
	(*stack_b) = (*stack_b)->head;
	(*stack_b)->prev = NULL;
	if ((*stack_a) == NULL)
	{
		(*stack_a) = tmp;
		(*stack_a)->prev = NULL;
		(*stack_a)->next = NULL;
	}
	else if ((*stack_a) != NULL)
		pa_helper(stack_a, tmp);
	ft_printf("pa\n");
}

static void	pb_helper(t_node **stack_b, t_node *tmp)
{
	(*stack_b)->head = tmp;
	(*stack_b)->prev = (*stack_b)->head;
	(*stack_b)->head->next = (*stack_b);
	(*stack_b) = (*stack_b)->head;
	(*stack_b)->prev = NULL;
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;

	tmp = (*stack_a);
	if ((*stack_a) == NULL)
		return ;
	if ((*stack_a)->next == NULL)
	{
		pb_helper(stack_b, tmp);
		(*stack_a) = NULL;
		ft_printf("pb\n");
		return ;
	}
	(*stack_a)->head = (*stack_a)->next;
	(*stack_a) = (*stack_a)->head;
	(*stack_a)->prev = NULL;
	if ((*stack_b) == NULL)
	{
		(*stack_b) = tmp;
		(*stack_b)->prev = NULL;
		(*stack_b)->next = NULL;
	}
	else if ((*stack_b) != NULL)
		pb_helper(stack_b, tmp);
	ft_printf("pb\n");
}
