/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:36:17 by jbach             #+#    #+#             */
/*   Updated: 2022/02/14 13:36:18 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils/pushswap.h"

void	ft_indexstack(int argc, char **argv, t_list **stacka_point)
{
	int		i;
	int		j;
	int		x;
	int		c;
	t_list	*node;

	i = 1;
	x = 1;
	c = 0;
	node = *stacka_point;
	while (i < argc)
	{
		j = i;
		c = 0;
		x = 1;
		while (x < argc)
		{
			if (ft_atoi(argv[x]) < ft_atoi(argv[j]))
				c++;
			x++;
		}
		node->index = c;
		node = node->next;
		i++;
	}
}
