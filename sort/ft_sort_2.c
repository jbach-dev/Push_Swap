/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:08:17 by jbach             #+#    #+#             */
/*   Updated: 2022/02/21 10:08:19 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/pushswap.h"

void	ft_sort_2(t_list **stacka_point)
{
	t_list	*node;

	node = *stacka_point;
	if (node->index == 1)
	{
		node->previous = node->next;
		node->next = NULL;
		node->previous->previous = NULL;
		node->previous->next = node;
	}
	*stacka_point = node->previous;
	write(1, "sa\n", 3);
}
