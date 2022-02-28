/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouv_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:17:40 by jbach             #+#    #+#             */
/*   Updated: 2022/02/16 14:17:42 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	ft_mouv_sa(t_list **stacka_point, int verif)
{
	t_list	*node;

	if (!stacka_point || !((*stacka_point)->next))
		return ;
	node = *stacka_point;
	node->previous = node->next;
	node->next = node->next->next;
	node->previous->previous = NULL;
	node->previous->next = node;
	node->next->previous = node;
	*stacka_point = node->previous;
	if (verif == 0)
		write(1, "sa\n", 3);
}

void	ft_mouv_sb(t_list **stackb_point, int verif)
{
	t_list	*node;

	if (*stackb_point == NULL)
		return ;
	if (!(stackb_point))
		return ;
	node = *stackb_point;
	node->previous = node->next;
	node->next = node->next->next;
	node->previous->previous = NULL;
	node->previous->next = node;
	*stackb_point = node->previous;
	if (verif == 0)
		write(1, "sb\n", 3);
}

void	ft_mouv_ss(t_list **stacka_point, t_list **stackb_point)
{
	ft_mouv_sa(stacka_point, 1);
	ft_mouv_sb(stackb_point, 1);
	write(1, "ss\n", 3);
}
