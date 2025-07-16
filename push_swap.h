/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:06:45 by araveala          #+#    #+#             */
/*   Updated: 2024/04/22 10:03:06 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

//double linked list
typedef struct s_node
{
	int				data;
	int				index;
	int				count;

	struct s_node	*next;
	struct s_node	*prev;
	struct s_node	*head;	
}				t_node;

//storage for attic 
typedef struct s_attic
{
	int		count;
	int		split;
	int		x;
	int		i;
}				t_attic;

int			initialize(char *string, t_node **top);
int			ft_count_array(char *s, char c);
int			count_stack(t_node **stack);
long int	convert(char *string, t_node *list);

//error check
int			int_error_check(long int number, t_node *list);
int			quick_check(char *string);
void		edward_error_hands(int x);

//sort realted
void		sort_two(t_node **stack_a);
void		sort_three(t_node **stack_a);
void		sort_mini(t_node **stack_a, t_node **stack_b, t_attic box);
int			check_sorted(t_node *stack);
int			get_max(t_node **stack);
void		radixish(t_node **stack_a, t_node **stack_b, t_attic box);
t_node		send(t_node **stack_a, t_node **stack_b, t_attic box);

//free
void		free_array(char **array, int count);
void		free_stack(t_node *top);

//instructons
void		sa(t_node **stack_a, int flag);
void		sb(t_node **stack_b, int flag);
void		ss(t_node **stack_a, t_node **stack_b);

void		ra(t_node **stack_a, int flag);
void		rb(t_node **stack_b, int flag);
void		rr(t_node **stack_a, t_node **stack_b);

void		rra(t_node **stack_a, int flag);
void		rrb(t_node **stack_b, int flag);
void		rrr(t_node **stack_a, t_node **stack_b);

void		pa(t_node **stack_b, t_node **stack_a);
void		pb(t_node **stack_a, t_node **stack_b);

//comparison utils
int			compare_biggest_tips(t_node **stack);
int			compare_smallest_tips(t_node **stk);

//indexing
int			find_biggest(t_node **stack, t_attic box);
int			find_next(t_node **stack, t_attic box);
void		indexing(t_node **stack, t_attic box);

//node manipulation
int			insert_node(t_node **top, int number);
#endif
