/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::	  */
/*	 rotate.c											:+:		 :+:	:+:	  */
/*													  +:+ +:+		  +:+	  */
/*	 By: araveala <araveala@student.hive.fi>		+#+	 +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/03/07 09:48:34 by araveala		   #+#	  #+#			  */
/*   Updated: 2024/04/16 10:29:13 by araveala         ###   ########.fr       */
/*																			  */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **stack_a, int flag)
{
	t_node	*first;
	t_node	*last;

	first = (*stack_a);
	if ((*stack_a)->next == NULL)
		return ;
	while ((*stack_a)->next != NULL)
	{
		(*stack_a) = (*stack_a)->next;
		last = (*stack_a);
	}
	(*stack_a)->head = first->next;
	last->next = first;
	first->next = NULL;
	(*stack_a) = (*stack_a)->head;
	(*stack_a)->prev = NULL;
	if (flag == 1)
		ft_printf("ra\n");
}

void	rb(t_node **stack_b, int flag)
{
	t_node	*first;
	t_node	*last;

	first = (*stack_b);
	if ((*stack_b)->next == NULL)
		return ;
	while ((*stack_b)->next != NULL)
	{
		(*stack_b) = (*stack_b)->next;
		last = (*stack_b);
	}
	(*stack_b)->head = first->next;
	last->next = first;
	first->next = NULL;
	(*stack_b) = (*stack_b)->head;
	(*stack_b)->prev = NULL;
	if (flag == 1)
		ft_printf("rb\n");
}

void	rra(t_node **stack_a, int flag)
{
	t_node	*first;
	t_node	*scd_last;
	t_node	*last;

	first = (*stack_a);
	if ((*stack_a)->next == NULL)
		return ;
	while ((*stack_a)->next != NULL)
	{
		if ((*stack_a)->next->next == NULL)
			scd_last = (*stack_a);
		(*stack_a) = (*stack_a)->next;
		last = (*stack_a);
	}
	(*stack_a)->head = last;
	last->next = first;
	scd_last->next = NULL;
	first->prev = last;
	(*stack_a) = (*stack_a)->head;
	(*stack_a)->prev = NULL;
	if (flag == 1)
		ft_printf("rra\n");
}

void	rrb(t_node **stack_b, int flag)
{
	t_node	*first;
	t_node	*scd_last;
	t_node	*last;

	first = (*stack_b);
	if ((*stack_b)->next == NULL)
		return ;
	while ((*stack_b)->next != NULL)
	{
		if ((*stack_b)->next->next == NULL)
			scd_last = (*stack_b);
		(*stack_b) = (*stack_b)->next;
		last = (*stack_b);
	}
	(*stack_b)->head = last;
	last->next = first;
	scd_last->next = NULL;
	first->prev = last;
	(*stack_b) = (*stack_b)->head;
	(*stack_b)->prev = NULL;
	ft_printf("rbb\n");
	if (flag == 1)
		ft_printf("rrb\n");
}
