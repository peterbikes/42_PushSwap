/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:04:51 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/06 17:52:22 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_b(t_stack **b, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			rb(b, 1);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			rrb(b, 1);
			(*cost)++;
		}
	}
}
