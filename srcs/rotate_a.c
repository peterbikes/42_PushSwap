/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:04:06 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/06 16:25:19 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_stack **a, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			ra(a, 1);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			rra(a, 1);
			(*cost)++;
		}
	}
}
