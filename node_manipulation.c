/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_manipulation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:31:36 by araveala          #+#    #+#             */
/*   Updated: 2024/04/16 16:53:10 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	insert_node(t_node **top, int number)
{
	t_node	*new_node;
	t_node	*tmp;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		return (-1);
	new_node->data = number;
	new_node->index = -1;
	new_node->next = NULL;
	if (*top == NULL)
	{
		new_node->prev = NULL;
		*top = new_node;
		return (1);
	}
	tmp = *top;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	new_node->prev = tmp;
	return (1);
}
