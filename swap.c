/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 08:29:41 by araveala          #+#    #+#             */
/*   Updated: 2024/04/22 10:43:11 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_helper(t_node **stack)
{
	t_node	*first;

	first = (*stack)->next;
	first->next = (*stack);
	(*stack)->next = NULL;
	first->prev = NULL;
	(*stack) = first;
}

void	sa(t_node **stack_a, int flag)
{
	t_node	*first;
	t_node	*third;

	third = NULL;
	first = (*stack_a);
	if ((*stack_a)->next == NULL)
		return ;
	if ((*stack_a)->next->next == NULL)
	{
		swap_helper(stack_a);
		if (flag == 1)
			ft_printf("sa\n");
		return ;
	}
	third = (*stack_a)->next->next;
	(*stack_a)->head = (*stack_a)->next;
	(*stack_a)->head->next = first;
	first->next = third;
	third->prev = first;
	first->prev = (*stack_a)->head;
	(*stack_a) = (*stack_a)->head;
	(*stack_a)->prev = NULL;
	if (flag == 1)
		ft_printf("sa\n");
}

void	sb(t_node **stack_b, int flag)
{
	t_node	*first;
	t_node	*third;

	first = (*stack_b);
	if ((*stack_b)->next == NULL)
		return ;
	if ((*stack_b)->next->next == NULL)
	{
		swap_helper(stack_b);
		if (flag == 1)
			ft_printf("sb\n");
		return ;
	}
	third = (*stack_b)->next->next;
	(*stack_b)->head = (*stack_b)->next;
	(*stack_b)->head->next = first;
	first->next = third;
	third->prev = first;
	first->prev = (*stack_b)->head;
	(*stack_b) = (*stack_b)->head;
	(*stack_b)->prev = NULL;
	if (flag == 1)
		ft_printf("sb\n");
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	ft_printf("ss\n");
}
