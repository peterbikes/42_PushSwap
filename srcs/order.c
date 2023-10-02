/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 00:13:12 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/03 13:24:51 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	order(int ac, char **av)
{
	int	nbr;
	int	i;
	int	k;

	i = 1;
	k = 1;
	while (k < ac)
	{
		nbr = ft_atoi(av[k]);
		i = k + 1;
		while (i < ac)
		{
			if (nbr > ft_atoi(av[i]))
				return (1);
		i++;
		}
		k++;
	}
	return (0);
}
