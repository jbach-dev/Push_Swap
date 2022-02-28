/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numeric.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:28:16 by jbach             #+#    #+#             */
/*   Updated: 2022/02/10 22:28:17 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_isnumeric(char *c)
{
	int	i;

	i = 0;
	if (!ft_isdigit(c) && c[i])
		return (0);
	while (c[i] != '\0')
	{
		if (!ft_isdigit(c))
			return (0);
		i++;
	}
	return (1);
}
