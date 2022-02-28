/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:08:22 by jbach             #+#    #+#             */
/*   Updated: 2022/02/21 10:08:23 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/pushswap.h"

void	ft_sort_3(t_list **stacka_point)
{
	t_list	*node;

	node = *stacka_point;
	if ((node->index > node->next->index))
	{
		if (node->index > node->next->next->index)
		{
			if (node->next->index > node->next->next->index)
			{
				ft_mouv_sa(stacka_point, 0);
				ft_mouv_rra(stacka_point, 0);
			}
			else
				ft_mouv_ra(stacka_point, 0);
		}
		else if (node->index > node->next->index)
			ft_mouv_sa(stacka_point, 0);
	}
	else if (node->index > node->next->next->index)
		ft_mouv_rra(stacka_point, 0);
	else if (node->next->index > node->next->next->index)
	{
		ft_mouv_sa(stacka_point, 0);
		ft_mouv_ra(stacka_point, 0);
	}
}
