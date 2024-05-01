/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <mabrito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:11:07 by marianamest       #+#    #+#             */
/*   Updated: 2024/05/01 20:13:41 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	revrotate(t_node **stack)
{
	int		counter;
	t_node	*temp;

	counter = 0;
	temp = *stack;
	if (!*stack || !(*stack)->next)
		return ;
	while ((*stack)->next)
	{
		*stack = (*stack)->next;
		counter++;
	}
	(*stack)->next = temp;
	while (counter > 1)
	{
		temp = temp->next;
		counter--;
	}
	temp->next = NULL;
}

void	rra(t_node **a)
{
	revrotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **b)
{
	revrotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **a, t_node **b)
{
	rra(a);
	rrb(b);
}
