/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::	  */
/*	 rotate_both.c										:+:		 :+:	:+:	  */
/*													  +:+ +:+		  +:+	  */
/*	 By: araveala <araveala@student.hive.fi>		+#+	 +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/04/16 10:24:01 by araveala		   #+#	  #+#			  */
/*   Updated: 2024/04/16 10:29:58 by araveala         ###   ########.fr       */
/*																			  */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_node **stack_a, t_node **stack_b)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	ft_printf("rrr\n");
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	ft_printf("rr\n");
}
