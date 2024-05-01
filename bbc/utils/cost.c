/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 13:36:35 by marianamest       #+#    #+#             */
/*   Updated: 2024/04/27 16:16:11 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	moves(t_node *stack, int num, int length)
{
	int	amount;
	int	middle;

	amount = 0;
	middle = length / 2;
	while (stack->value != num)
	{
		amount++;
		stack = stack->next;
	}
	if (amount > middle)
		amount = length - amount;
	return (amount);
}

int	cost(t_node *a, t_node *b, int num, int bestie)
{
	int	amount_for_a;
	int	amount_for_b;

	amount_for_a = moves(a, bestie, ft_lstsize(&a));
	amount_for_b = moves(b, num, ft_lstsize(&b));
	return (amount_for_a + amount_for_b);
}

int	cheapest(t_node *a, t_node *b)
{
	t_node	*tmp;
	int		num;
	int		bestie;
	int		cheapest;
	int		price;

	tmp = b;
	num = b->value;
	cheapest = INT_MAX;
	while (tmp)
	{
		bestie = findbestfriend(a, tmp->value);
		price = cost(a, b, tmp->value, bestie);
		if (price < cheapest)
		{
			num = tmp->value;
			cheapest = price;
		}
		tmp = tmp->next;
	}
	return (num);
}
