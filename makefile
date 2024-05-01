# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabrito- <mabrito-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 14:01:44 by marianamest       #+#    #+#              #
#    Updated: 2024/05/01 19:07:37 by mabrito-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = algorithms/generalsort.c algorithms/sort3.c algorithms/sort5.c \
finders/besties.c finders/values.c \
moves/swap.c moves/push.c moves/rotate.c moves/revrotate.c \
utils/lists/ft_lstadd_back.c utils/lists/ft_lstlast.c utils/lists/ft_lstnew.c utils/lists/ft_lstsize.c \
utils/atol.c utils/checkers.c utils/cost.c utils/free.c utils/ft_split.c utils/putontop.c \
main.c 

OFILES	= $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

${NAME} : ${OFILES}	

	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all