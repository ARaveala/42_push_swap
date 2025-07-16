/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::	  */
/*	 push_swap.c										:+:		 :+:	:+:	  */
/*													  +:+ +:+		  +:+	  */
/*	 By: araveala <araveala@student.hive.fi>		+#+	 +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/02/22 11:06:17 by araveala		   #+#	  #+#			  */
/*   Updated: 2024/04/22 12:39:30 by araveala         ###   ########.fr       */
/*																			  */
/* ************************************************************************** */

#include "push_swap.h"

static void	stupid_check(char *string, t_node **stack_a)
{
	if (*string == '-' || *string == '+')
	{
		quick_check(string);
		if (initialize(string, stack_a) == 0)
			edward_error_hands(5);
	}
	else if (ft_isdigit(*string) == 1)
	{
		quick_check(string);
		initialize(string, stack_a);
		edward_error_hands(5);
	}
}

int	split_init(char *string, t_node **stack_a, t_attic box)
{
	char	**tmp;
	int		i;

	i = 0;
	if (box.count == 1)
		stupid_check(string, stack_a);
	tmp = ft_split(string, 32);
	if (tmp == NULL || !*string)
		exit (1);
	while (i <= box.count && tmp[i] != NULL)
	{
		quick_check(tmp[i]);
		initialize(tmp[i], stack_a);
		i++;
	}
	free_array(tmp, box.count);
	return (1);
}

int	main(int argc, char **argv)
{
	static t_node	*stack_a;
	static t_node	*stack_b;
	static t_attic	box;
	int				i;

	i = 0;
	box.count = argc - 1;
	box.split = 0;
	if (argc == 1)
		edward_error_hands(5);
	if (argc == 2)
	{
		box.count = ft_count_array(argv[1], 32);
		box.split = 1;
		split_init(argv[1], &stack_a, box);
	}
	while (++i && argc > 1 && box.split == 0)
	{
		quick_check(argv[i]);
		initialize(argv[i], &stack_a);
		argc--;
	}
	send(&stack_a, &stack_b, box);
	free_stack(&*stack_a);
	return (1);
}
