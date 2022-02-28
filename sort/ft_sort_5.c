/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:08:27 by jbach             #+#    #+#             */
/*   Updated: 2022/02/28 12:05:05 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/pushswap.h"

void	ft_sort_5(t_list **stacka, t_list **stackb)
{
	t_list	*nodea;
	int		index;

	nodea = *stacka;
	index = nodea->index;
	while (nodea->next)
	{
		if (index > nodea->next->index)
			index = nodea->next->index;
		nodea = nodea->next;
	}
	while (((*stacka)->index != index) && ((*stacka)->index != (index + 1)))
		ft_mouv_ra(stacka, 0);
	ft_mouv_pb(stacka, stackb);
	while (((*stacka)->index != index) && ((*stacka)->index != (index + 1)))
		ft_mouv_ra(stacka, 0);
	ft_mouv_pb(stacka, stackb);
	ft_sort_3(stacka);
	if ((*stackb)->index == index)
		ft_mouv_sb(stackb, 0);
	ft_mouv_pa(stacka, stackb);
	ft_mouv_pa(stacka, stackb);
}
