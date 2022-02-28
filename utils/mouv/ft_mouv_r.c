/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouv_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:17:27 by jbach             #+#    #+#             */
/*   Updated: 2022/02/16 14:17:30 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	ft_mouv_ra(t_list **stacka_point, int verif)
{
	t_list	*node;
	t_list	*last;

	node = *stacka_point;
	last = ft_lstlast(node);
	if (!node || !(node->next))
		return ;
	*stacka_point = node->next;
	(*stacka_point)->previous = NULL;
	node->previous = last;
	node->next = NULL;
	node->previous->next = node;
	if (verif == 0)
		write(1, "ra\n", 3);
}

void	ft_mouv_rb(t_list **stackb_point, int verif)
{
	t_list	*node;
	t_list	*last;

	node = *stackb_point;
	last = ft_lstlast(node);
	if (!node || !(node->next))
		return ;
	*stackb_point = node->next;
	(*stackb_point)->previous = NULL;
	node->previous = last;
	node->next = NULL;
	node->previous->next = node;
	if (verif == 0)
		write(1, "rb\n", 3);
}

void	ft_mouv_rr(t_list **stacka_point, t_list **stackb_point)
{
	ft_mouv_ra(stacka_point, 1);
	ft_mouv_rb(stackb_point, 1);
	write(1, "rr\n", 3);
}
