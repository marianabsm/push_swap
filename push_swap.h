/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 01:31:35 by marianamest       #+#    #+#             */
/*   Updated: 2024/05/01 22:01:41 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

/*extern int			move_counter;*/

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

/* split */
char				*ft_write_word(char *word_arr, const char *s, int i,
						int word_length);
void				ft_split_words(const char *s, char c, char **str,
						int word_count);
int					ft_word_counter(const char *s, char c);
char				**ft_split(const char *s, char c);
void				check_length(int tmp, char **n, int j, t_node **stack);

/* atol */
long				ft_atol(const char *str);
int					ft_strlen(char *str);

/* lists */
void				ft_lstadd_back(t_node **stack, t_node *new);
t_node				*ft_lstlast(t_node *stack);
t_node				*ft_lstnew(int content);
int					ft_lstsize(t_node **stack);

/* free */
int					free_strings(char **n);
void				free_nodes(t_node **stack);

/* checkers */
int					is_dup(char **av, long tmp, int i);
int					is_num(char *str);
int					is_sorted(t_node **stack);
void				parser(char **av, t_node **stack);

/* positions */
int					highest_value_pos(t_node **stack);
int					lowest_value_pos(t_node **stack);

/* values */
int					lowest_value(t_node *stack);
int					median_value(t_node **stack);

/* besties */
int					findbestfriend(t_node *stack, int num);

/* cost */
int					moves(t_node *stack, int num, int length);
int					cost(t_node *a, t_node *b, int num, int bestie);
int					cheapest(t_node *a, t_node *b);

/* put on top */
void				putontop_a(t_node **stack, int num);
void				putontop_b(t_node **stack, int num);

/* moves */
void				pa(t_node **a, t_node **b);
void				pb(t_node **a, t_node **b);

void				revrotate(t_node **stack);
void				rrr(t_node **a, t_node **b);
void				rra(t_node **a);
void				rrb(t_node **b);

void				rotate(t_node **stack);
void				rr(t_node **a, t_node **b);
void				ra(t_node **a);
void				rb(t_node **b);

void				swap(t_node **stack);
void				ss(t_node **a, t_node **b);
void				sa(t_node **a);
void				sb(t_node **b);

/* algorithms */
void				sort3(t_node **stack);
void				sort5(t_node **a, t_node **b);
void				generalsort(t_node **a, t_node **b);
void				pushswap(t_node **a, t_node **b);

/* main */
int					main(int ac, char **av);
void				error_exit(char **n, t_node **stack);

#endif