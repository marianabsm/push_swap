/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 17:22:36 by marianamest       #+#    #+#             */
/*   Updated: 2024/04/28 17:22:40 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_lstsize(t_node **stack)
{
	t_node	*tmp;
	int		size;

	tmp = *stack;
	size = 0;
	if (tmp == NULL)
		return (0);
	while (tmp != NULL)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
