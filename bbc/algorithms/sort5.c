/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 02:47:01 by marianamest       #+#    #+#             */
/*   Updated: 2024/04/29 17:29:08 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort5(t_node **a, t_node **b)
{
	while (ft_lstsize(a) > 3)
	{
		if (lowest_value_pos(a) == 0)
			pb(a, b);
		else
			ra(a);
	}
	sort3(a);
	pa(a, b);
	pa(a, b);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}
