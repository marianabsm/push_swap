/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putontop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 13:57:34 by marianamest       #+#    #+#             */
/*   Updated: 2024/04/27 16:46:09 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	putontop_a(t_node **stack, int num)
{
	int		position;
	t_node	*tmp;
	int		len;

	position = 0;
	tmp = *stack;
	while (tmp != NULL && tmp->value != num)
	{
		position++;
		tmp = tmp->next;
	}
	len = ft_lstsize(stack);
	if (position > len / 2)
	{
		position = len - position;
		while (position-- > 0)
			rra(stack);
	}
	else
	{
		while (position-- > 0)
			ra(stack);
	}
}

void	putontop_b(t_node **stack, int num)
{
	t_node	*tmp;
	int		position;
	int		len;

	position = 0;
	tmp = *stack;
	while (tmp != NULL && tmp->value != num)
	{
		position++;
		tmp = tmp->next;
	}
	len = ft_lstsize(stack);
	if (position > len / 2)
	{
		position = len - position;
		while (position-- > 0)
			rrb(stack);
	}
	else
	{
		while (position-- > 0)
			rb(stack);
	}
}
