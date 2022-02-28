/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:09:52 by jbach             #+#    #+#             */
/*   Updated: 2022/02/17 17:09:55 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils/pushswap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_nogoodargu(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!ft_isnumeric(argv[i]))
			ft_error();
		if (ft_atol(argv[i]) > INT_MAX || ft_atol(argv[i]) < INT_MIN)
			ft_error();
		i++;
	}
}

void	ft_same_nb(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argc > i)
	{
		j = i + 1;
		while (argc > j)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				ft_error();
			j++;
		}
		i++;
	}
}

int	ft_ifnbsort(int argc, char **argv)
{
	int	i;
	int	j;
	int	f;

	i = 1;
	j = 2;
	f = 0;
	while (j < argc)
	{
		if (ft_atoi(argv[i]) > ft_atoi(argv[j]))
			f = 1;
		i++;
		j++;
	}
	return (f);
}

void	ft_verifparams(int argc, char **argv)
{
	int	f;

	ft_nogoodargu(argc, argv);
	ft_same_nb(argc, argv);
	f = ft_ifnbsort(argc, argv);
	if (f == 0)
		exit(1);
	if (argc <= 2)
		exit(1);
}
