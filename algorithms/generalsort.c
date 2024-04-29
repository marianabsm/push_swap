/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generalsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 02:47:16 by marianamest       #+#    #+#             */
/*   Updated: 2024/04/28 17:03:35 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	generalsort(t_node **a, t_node **b)
{
	int	mean;

	while (ft_lstsize(a) > 5)
	{
		mean = median_value(a);
		if ((*a)->value < mean)
			pb(a, b);
		else
			ra(a);
	}
	sort5(a, b);
	pushswap(a, b);
}

void	pushswap(t_node **a, t_node **b)
{
	int	n;
	int	bf;

	while (*b)
	{
		n = cheapest(*a, *b);
		bf = findbestfriend(*a, n);
		putontop_b(b, n);
		putontop_a(a, bf);
		pa(a, b);
	}
	if (lowest_value_pos(a) > (ft_lstsize(a) / 2))
	{
		while ((*a)->value != lowest_value(*a))
			rra(a);
	}
	else
		while ((*a)->value != lowest_value(*a))
			ra(a);
}
