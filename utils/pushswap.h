/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:51:00 by jbach             #+#    #+#             */
/*   Updated: 2022/02/26 15:51:01 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <unistd.h>

typedef struct stack_list
{
	int					data;
	int					index;
	int					branch;
	struct stack_list	*next;
	struct stack_list	*previous;
}	t_list;

// init
t_list	**initstacka(int argc, char **argv);
t_list	**initstackb(void);

//verif
void	ft_verifparams(int argc, char **argv);

//utils
int		ft_atoi(const char *str);
int		ft_isdigit(char *c);
long	ft_atol(const char *str);
int		ft_isnumeric(char *c);
void	ft_indexstack(int argc, char **argv, t_list **stacka_point);

//lst
void	ft_lstadd_front(t_list **alst, t_list *new_node);
void	ft_lstadd_back(t_list **alst, t_list *new_node);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int data, int index, int branch);

//mouvements s
void	ft_mouv_sa(t_list **stacka_point, int verif);
void	ft_mouv_sb(t_list **stackb_point, int verif);
void	ft_mouv_ss(t_list **stacka_point, t_list **stackb_point);

//mouvements r
void	ft_mouv_ra(t_list **stacka_point, int verif);
void	ft_mouv_rb(t_list **stackb_point, int verif);
void	ft_mouv_rr(t_list **stacka_point, t_list **stackb_point);

//mouvements rr
void	ft_mouv_rra(t_list **stacka_point, int verif);
void	ft_mouv_rrb(t_list **stackb_point, int verif);
void	ft_mouv_rrr(t_list **stacka_point, t_list **stackb_point);

//mouvements p
void	ft_mouv_pb(t_list **stacka_point, t_list **stackb_point);
void	ft_mouv_pa(t_list **stacka_point, t_list **stackb_point);

void	ft_error_message(char *str);

//sort
void	ft_sort_2(t_list **stacka_point);
void	ft_sort_3(t_list **stacka_point);
void	ft_sort_4(t_list **stacka_point, t_list **stackb_point);
void	ft_sort_5(t_list **stacka_point, t_list **stackb_point);
void	ft_sort_sup5(t_list **stacka_point, t_list **stackb_point);

#endif
