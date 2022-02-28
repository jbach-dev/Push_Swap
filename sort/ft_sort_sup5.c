/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_sup5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:44:43 by jbach             #+#    #+#             */
/*   Updated: 2022/02/28 13:11:59 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/pushswap.h"

int	ft_nb_element(t_list **stacka_point)
{
	t_list	*nodea;
	int		nb_ele_stacka;

	nb_ele_stacka = 0;
	nodea = *stacka_point;
	while (nodea)
	{
		nb_ele_stacka++;
		nodea = nodea->next;
	}
	return (nb_ele_stacka);
}

int	ft_issorted(t_list **stacka_point)
{
	t_list	*nodea;

	nodea = *stacka_point;
	while (nodea->next)
	{
		if (nodea->index > nodea->next->index)
			return (0);
		nodea = nodea->next;
	}
	return (1);
}

int	ft_bit(t_list **stacka_point, t_list **stackb_point, int sizea, int i)
{
	int		j;
	t_list	*nodea;

	nodea = *stacka_point;
	j = 0;
	while (j < sizea)
	{
		if ((nodea->index >> i) & 1)
		{
			ft_mouv_ra(stacka_point, 0);
			nodea = *stacka_point;
		}
		else
		{
			ft_mouv_pb(stacka_point, stackb_point);
			nodea = *stacka_point;
		}
		j++;
	}
	return (j);
}

void	ft_sort_sup5(t_list **stacka_point, t_list **stackb_point)
{
	t_list	*nodea;
	t_list	*nodeb;
	int		sizea;
	int		bit;
	int		i;

	sizea = ft_nb_element(stacka_point);
	bit = 32;
	i = 0;
	nodea = *stacka_point;
	while (i < bit && !(ft_issorted(stacka_point)))
	{
		nodea = *stacka_point;
		ft_bit(stacka_point, stackb_point, sizea, i);
		i++;
		nodeb = *stackb_point;
		while (nodeb)
		{
			ft_mouv_pa(stacka_point, stackb_point);
			nodeb = *stackb_point;
		}
	}
}
