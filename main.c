/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <mabrito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:05:31 by marianamest       #+#    #+#             */
/*   Updated: 2024/05/01 20:04:06 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*int move_counter = 0;*/

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;

	if (ac > 1)
	{
		a = NULL;
		b = NULL;
		parser(av, &a);
		if (is_sorted(&a))
		{
			free_nodes(&a);
			return (0);
		}
		if (ft_lstsize(&a) <= 3)
			sort3(&a);
		else if (ft_lstsize(&a) <= 5)
			sort5(&a, &b);
		else
			generalsort(&a, &b);
		free_nodes(&a);
	}
	else
		return (1);
}
