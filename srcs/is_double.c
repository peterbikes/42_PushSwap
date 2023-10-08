/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_double.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 00:13:12 by psotto-m          #+#    #+#             */
/*   Updated: 2023/10/08 15:13:56 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_double(int ac, char **av)
{
	int	nbr;
	int	i;
	int	k;

	i = 1;
	k = i + 1;
	while (i < ac)
	{
		nbr = ft_atoi(av[i]);
		while (k < ac)
		{
			if (nbr == ft_atoi(av[k]))
				error();
			k++;
		}
		i++;
		k = i + 1;
	}
	return (1);
}
