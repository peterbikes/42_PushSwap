/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ro_bo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:14:43 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/06 17:58:33 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
	if (*cost_a > 0 && *cost_b > 0)
	{
		while (*cost_a > 0 && *cost_b > 0)
		{
			(*cost_a)--;
			(*cost_b)--;
			rr(a, b);
		}
	}
	else if (*cost_a < 0 && *cost_b < 0)
	{
		while (*cost_a < 0 && *cost_b < 0)
		{
			(*cost_a)++;
			(*cost_b)++;
			rrr(a, b);
		}
	}
}
