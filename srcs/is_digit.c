/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 23:20:41 by psotto-m          #+#    #+#             */
/*   Updated: 2023/10/08 15:13:02 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_digit(int ac, char **av)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	while (k < ac)
	{
		if (av[k][i] == '-' || av[k][i] == '+')
			i++;
		while (av[k][i] != '\0')
		{
			if (av[k][i] < '0' || av[k][i] > '9')
			{
				write(1, "Error\n", 6);
				exit (1);
			}
			i++;
		}
		i = 0;
		k++;
	}
	return (1);
}
