/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   values.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 02:55:16 by marianamest       #+#    #+#             */
/*   Updated: 2024/04/28 17:14:54 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	highest_value_pos(t_node **stack)
{
	int		highest;
	int		i;
	int		j;
	t_node	*current;

	highest = INT_MIN;
	i = -1;
	j = 0;
	current = *stack;
	while (current)
	{
		if (current->value > highest)
		{
			highest = current->value;
			i = j;
		}
		current = current->next;
		j++;
	}
	return (i);
}

int	lowest_value_pos(t_node **stack)
{
	int		i;
	int		lowest;
	t_node	*tmp;
	t_node	*current;

	i = 0;
	lowest = (*stack)->value;
	tmp = *stack;
	current = *stack;
	while (current)
	{
		if (current->value < lowest)
			lowest = current->value;
		current = current->next;
	}
	while (tmp->value != lowest)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

int	lowest_value(t_node *stack)
{
	int		lowest;
	t_node	*current;

	current = stack;
	lowest = current->value;
	while (current)
	{
		if (current->value < lowest)
			lowest = current->value;
		current = current->next;
	}
	return (lowest);
}

int	median_value(t_node **stack)
{
	int		sum;
	int		count;
	t_node	*current;

	sum = 0;
	count = 0;
	current = (*stack);
	while (current)
	{
		sum += current->value;
		count++;
		current = current->next;
	}
	return (sum / count);
}
