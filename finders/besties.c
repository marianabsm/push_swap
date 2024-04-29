/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   besties.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 13:14:23 by marianamest       #+#    #+#             */
/*   Updated: 2024/04/27 16:12:27 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	findbestfriend(t_node *stack, int num)
{
	t_node	*current;
	int		bestie;

	bestie = INT_MAX;
	current = stack;
	while (current)
	{
		if (current->value > num && bestie > current->value)
			bestie = current->value;
		current = current->next;
	}
	return (bestie);
}
