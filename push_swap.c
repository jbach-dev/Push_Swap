/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:38:37 by jbach             #+#    #+#             */
/*   Updated: 2022/02/28 14:35:40 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils/pushswap.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*run_through;

	while (*lst)
	{
		run_through = (*lst)->next;
		free(*lst);
		*lst = run_through;
	}
	free(lst);
}

int	main(int argc, char **argv)
{
	t_list	**nodestacka;
	t_list	**nodestackb;

	ft_verifparams(argc, argv);
	nodestacka = initstacka(argc, argv);
	nodestackb = initstackb();
	ft_indexstack(argc, argv, nodestacka);
	if (argc == 3)
		ft_sort_2(nodestacka);
	else if (argc == 4)
		ft_sort_3(nodestacka);
	else if (argc == 5)
		ft_sort_4(nodestacka, nodestackb);
	else if (argc == 6)
		ft_sort_5(nodestacka, nodestackb);
	else
		ft_sort_sup5(nodestacka, nodestackb);
	ft_lstclear(nodestacka);
	ft_lstclear(nodestackb);
}
