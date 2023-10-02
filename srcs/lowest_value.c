/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lowest_value.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 00:05:34 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/03 13:25:05 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	lowest_value(int ac, char **av, int lowest)
{
	int	i;
	int	end_position;

	i = 1;
	end_position = (ac - 1);
	while (i < ac)
	{
		if (lowest < ft_atoi(av[i]))
			end_position--;
		i++;
	}
	return (end_position);
}
