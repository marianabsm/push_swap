/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:45:05 by mabrito-          #+#    #+#             */
/*   Updated: 2024/04/28 17:22:59 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_lstadd_back(t_node **stack, t_node *new)
{
	t_node	*last;

	if (!stack || !new)
		return ;
	if (!*stack)
		*stack = new;
	else
	{
		last = ft_lstlast(*stack);
		last->next = new;
	}
}
