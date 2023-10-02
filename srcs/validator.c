/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 23:22:32 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/03 13:47:04 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	validator(int ac, char **av)
{
	if (ac < 2)
	{
		exit(1);
	}
	is_digit(ac, av);
	is_double(ac, av);
	if (order(ac, av) == 0)
		exit(1);
}
