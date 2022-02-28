/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouv_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:17:20 by jbach             #+#    #+#             */
/*   Updated: 2022/02/28 14:34:04 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	ft_mouv_pb(t_list **stacka_point, t_list **stackb_point)
{
	t_list	*nodea;
	t_list	*newnode;

	if (!stacka_point)
		return ;
	if (*stacka_point == NULL)
		return ;
	nodea = *stacka_point;
	newnode = ft_lstnew(nodea->data, nodea->index, nodea->branch);
	if (!newnode)
		ft_error_message("Memory leaks");
	ft_lstadd_front(stackb_point, newnode);
	(*stacka_point) = (*stacka_point)->next;
	free(nodea);
	if (*stacka_point)
		(*stacka_point)->previous = NULL;
	if ((*stackb_point)->next)
		(*stackb_point)->next->previous = (*stackb_point);
	write(1, "pb\n", 3);
}

void	ft_mouv_pa(t_list **stacka_point, t_list **stackb_point)
{
	t_list	*nodeb;
	t_list	*newnode;

	if (!stackb_point)
		return ;
	if (*stackb_point == NULL)
		return ;
	nodeb = *stackb_point;
	newnode = ft_lstnew(nodeb->data, nodeb->index, nodeb->branch);
	if (!newnode)
		ft_error_message("Memory leaks");
	ft_lstadd_front(stacka_point, newnode);
	(*stackb_point) = (*stackb_point)->next;
	free(nodeb);
	if (*stackb_point)
		(*stackb_point)->previous = NULL;
	if ((*stacka_point)->next)
		(*stacka_point)->next->previous = (*stacka_point);
	write(1, "pa\n", 3);
}
