/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <mabrito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 02:25:00 by marianamest       #+#    #+#             */
/*   Updated: 2024/04/29 19:09:48 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_num(char *str)
{
	int	i;

	i = 0;
	if (!str || ((str[0] == '-' || str[0] == '+') && !(str[1] >= '0'
				&& str[1] <= '9')))
		return (0);
	while (str[i])
	{
		if (i == 0 && (str[i] == '-' || str[i] == '+'))
			i++;
		else if (str[i] && (str[i] >= '0' && str[i] <= '9'))
			i++;
		else
			return (0);
	}
	return (1);
}

int	is_dup(char **av, long tmp, int i)
{
	i++;
	while (av[i])
	{
		if (ft_atol(av[i]) == tmp)
			return (0);
		i++;
	}
	return (1);
}

int	is_sorted(t_node **stack)
{
	int		prev;
	t_node	*tmp;

	if (!*stack || !(*stack)->next)
		return (1);
	prev = (*stack)->value;
	tmp = (*stack)->next;
	while (tmp)
	{
		if (tmp->value < prev)
			return (0);
		prev = tmp->value;
		tmp = tmp->next;
	}
	return (1);
}

void	error_exit(char **n)
{
	write(2, "Error\n", 6);
	free_strings(n);
	exit(0);
}

void	parser(char **av, t_node **stack)
{
	int		i;
	int		j;
	long	tmp;
	char	**n;
	t_node	*new;

	i = 0;
	while (av[++i])
	{
		n = ft_split(av[i], ' ');
		j = -1;
		if (!n[j + 1])
			error_exit(n);
		while (n[++j])
		{
			tmp = ft_atol(n[j]);
			if (!is_dup(n, tmp, j) || !is_num(n[j]) || (tmp < INT_MIN || 
					tmp > INT_MAX) || !is_dup(av, tmp, i))
				error_exit(n);
			new = ft_lstnew(tmp);
			ft_lstadd_back(stack, new);
			free_nodes(&new);
		}
		free_strings(n);
	}
}
