/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 02:10:37 by marianamest       #+#    #+#             */
/*   Updated: 2024/04/27 16:16:27 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	free_strings(char **n)
{
	int	i;

	i = 0;
	if (n)
	{
		while (n[i])
			free(n[i++]);
		free(n);
	}
	return (0);
}

void	free_nodes(t_node **stack)
{
	t_node	*tmp;

	if (!stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		(*stack)->value = 0;
		free(*stack);
		(*stack) = tmp;
	}
}
