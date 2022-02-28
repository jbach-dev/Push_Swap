/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:36:04 by jbach             #+#    #+#             */
/*   Updated: 2022/02/28 14:36:11 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_lstadd_front(t_list **alst, t_list *new_node)
{
	if (alst && new_node)
	{
		new_node -> next = *alst;
		*alst = new_node;
	}
}

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;

	if (alst && new)
	{
		if (*alst == NULL)
			*alst = new;
		else
		{
			last = ft_lstlast(*alst);
			if (last != NULL)
				last -> next = new;
			new -> previous = last;
		}
	}
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

t_list	*ft_lstnew(int data, int index, int branch)
{
	t_list	*newl;

	newl = malloc(sizeof(t_list));
	if (!newl)
		return (NULL);
	if (newl)
	{
		newl->previous = NULL;
		newl->index = index;
		newl->data = data;
		newl->next = NULL;
		newl->branch = branch;
	}
	return (newl);
}

int	ft_lstsize(t_list *lst)
{
	size_t	size;
	t_list	*run_through;

	run_through = lst;
	size = 0;
	while (run_through)
	{
		run_through = run_through -> next;
		size++;
	}
	return (size);
}
