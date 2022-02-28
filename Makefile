# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbach <jbach@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 19:30:31 by jbach             #+#    #+#              #
#    Updated: 2022/02/28 14:37:36 by jbach            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC=gcc

CFLAGS=-Wall -Werror -Wextra -g

RM=rm -f

SRCS = push_swap.c\
index.c\
ft_init.c\
ft_verif.c\
sort/ft_sort_2.c\
sort/ft_sort_3.c\
sort/ft_sort_4.c\
sort/ft_sort_5.c\
sort/ft_sort_sup5.c\
utils/ft_lst.c\
utils/ft_isdigit.c\
utils/ft_atol.c\
utils/ft_atoi.c\
utils/ft_numeric.c\
utils/ft_error.c\
utils/mouv/ft_mouv_s.c\
utils/mouv/ft_mouv_p.c\
utils/mouv/ft_mouv_r.c\
utils/mouv/ft_mouv_rr.c

OBJETS = ${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJETS)
	$(CC) -o $(NAME) $(OBJETS)

all: $(NAME)

clean: 
	$(RM) $(OBJETS)

fclean: clean 
	$(RM) $(NAME)

re: fclean all
	
.PHONY: all clean fclean re
