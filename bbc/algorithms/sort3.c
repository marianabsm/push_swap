/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 02:46:06 by marianamest       #+#    #+#             */
/*   Updated: 2024/04/27 20:36:52 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort3(t_node **a)
{
	if (highest_value_pos(a) == 1 && lowest_value_pos(a) == 0)
	{
		rra(a);
		sa(a);
	}
	else if (highest_value_pos(a) == 0 && lowest_value_pos(a) == 2)
	{
		ra(a);
		sa(a);
	}
	else if (lowest_value_pos(a) == 1 && highest_value_pos(a) == 2)
		sa(a);
	else if (highest_value_pos(a) == 1 && lowest_value_pos(a) == 2)
		rra(a);
	else if (lowest_value_pos(a) == 1 && highest_value_pos(a) == 0)
		ra(a);
}
