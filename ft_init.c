/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:08:04 by jbach             #+#    #+#             */
/*   Updated: 2022/02/28 14:33:12 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils/pushswap.h"

t_list	**initstacka(int argc, char **argv)
{
	int		i;
	t_list	**stacka_point;
	t_list	*node;
	t_list	*newnode;

	i = 1;
	node = NULL;
	stacka_point = (t_list **)malloc(sizeof(t_list *));
	if (!stacka_point)
		return (NULL);
	*stacka_point = NULL;
	while (argv[i] && i < argc)
	{
		newnode = ft_lstnew(ft_atoi(argv[i]), 0, 0);
		if (!newnode)
		{
			ft_error_message("Memory leaks");
			free(newnode);
		}
		ft_lstadd_back(&node, newnode);
		newnode = NULL;
		i++;
	}
	*stacka_point = node;
	return (stacka_point);
}

t_list	**initstackb(void)
{
	t_list	**stackb_point;
	t_list	*node;

	node = NULL;
	stackb_point = (t_list **)malloc(sizeof(t_list *));
	if (!stackb_point)
		return (NULL);
	node = *stackb_point;
	*stackb_point = NULL;
	node = *stackb_point;
	return (stackb_point);
}
