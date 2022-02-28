/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:06:22 by jbach             #+#    #+#             */
/*   Updated: 2022/02/28 12:04:50 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/pushswap.h"

void	ft_sort_4(t_list **stacka, t_list **stackb)
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
	while ((*stacka)->index != index)
		ft_mouv_ra(stacka, 0);
	ft_mouv_pb(stacka, stackb);
	ft_sort_3(stacka);
	ft_mouv_pa(stacka, stackb);
}
