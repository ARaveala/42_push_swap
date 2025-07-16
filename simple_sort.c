/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::	  */
/*	 simple_sort.c										 :+:	  :+:	 :+:  */
/*													  +:+ +:+		  +:+	  */
/*	 By: araveala <araveala@student.hive.fi>		+#+	 +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/03/12 09:46:58 by araveala		   #+#	  #+#			  */
/*   Updated: 2024/04/22 10:44:09 by araveala         ###   ########.fr       */
/*																			  */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_node **stack_a)
{
	if ((*stack_a)->data > (*stack_a)->next->data)
		sa(stack_a, 1);
}

void	sort_three(t_node **stack_a)
{
	int	frst;
	int	scnd;
	int	third;

	frst = (*stack_a)->data;
	scnd = (*stack_a)->next->data;
	third = (*stack_a)->next->next->data;
	if (scnd < third && frst < third)
	{
		sa(stack_a, 1);
		return ;
	}
	if (frst < scnd)
		rra(stack_a, 1);
	if (frst > scnd)
		ra(stack_a, 1);
	if (check_sorted(*stack_a) == -1)
		sa(stack_a, 1);
	return ;
}

void	sort_mini_helper(t_node **stack_a, t_node **stack_b, int count, int i)
{
	while (i < count)
	{
		if (count_stack(stack_b) == 2)
		{
			pa(stack_b, stack_a);
			pa(stack_b, stack_a);
			if ((*stack_a)->data > (*stack_a)->next->data)
				sa(stack_a, 1);
			return ;
		}
		else if (compare_biggest_tips(stack_b) == 2 && (count - i) > 1)
			sb(stack_b, 1);
		pa(stack_b, stack_a);
		i++;
	}
}

void	sort_mini(t_node **stack_a, t_node **stack_b, t_attic box)
{
	int	i;

	i = box.count;
	while (i > 3)
	{
		if (compare_smallest_tips(stack_a) > 2)
			rra(stack_a, 1);
		else if (compare_smallest_tips(stack_a) == 2)
			sa(stack_a, 1);
		else if (compare_smallest_tips(stack_a) == 1)
		{
			pb(stack_a, stack_b);
			i--;
		}
	}
	if (check_sorted(*stack_a) == -1)
		sort_three(stack_a);
	sort_mini_helper(stack_a, stack_b, box.count, i);
}
