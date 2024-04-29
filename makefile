# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marianamestre <marianamestre@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 14:01:44 by marianamest       #+#    #+#              #
#    Updated: 2024/04/28 16:57:36 by marianamest      ###   ########.fr        #
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
CFLAGS = -Wall -Wextra -Werror 

all: $(NAME)

${NAME} : ${OFILES}	

	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all