/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouv_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:17:34 by jbach             #+#    #+#             */
/*   Updated: 2022/02/16 14:17:35 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	ft_mouv_rra(t_list **stacka_point, int verif)
{
	t_list	*node;
	t_list	*last;
	t_list	*new_last;

	node = *stacka_point;
	last = ft_lstlast(node);
	if (!node || !(node->next))
		return ;
	(*stacka_point)->previous = last;
	new_last = last->previous;
	last->previous = NULL;
	last->next = *stacka_point;
	new_last->next = NULL;
	*stacka_point = last;
	if (verif == 0)
		write(1, "rra\n", 4);
}

void	ft_mouv_rrb(t_list **stackb_point, int verif)
{
	t_list	*node;
	t_list	*last;
	t_list	*new_last;

	node = *stackb_point;
	last = ft_lstlast(node);
	if (!node || !(node->next))
		return ;
	(*stackb_point)->previous = last;
	new_last = last->previous;
	last->previous = NULL;
	last->next = *stackb_point;
	new_last->next = NULL;
	*stackb_point = last;
	if (verif == 0)
		write(1, "rrb\n", 4);
}

void	ft_mouv_rrr(t_list **stacka_point, t_list **stackb_point)
{
	ft_mouv_rra(stacka_point, 1);
	ft_mouv_rrb(stackb_point, 1);
	write(1, "rrr\n", 4);
}
