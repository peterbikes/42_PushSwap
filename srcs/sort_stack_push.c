/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:01:34 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/07 11:03:28 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_stack_push(t_stack **stack_a, t_stack **stack_b)
{
	int	stack_size;
	int	k;
	int	i;

	stack_size = count_list_size(stack_a);
	k = 0;
	i = 0;
	while (stack_size > 6 && i < stack_size && k < stack_size / 2)
	{
		if ((*stack_a)->end_position <= stack_size / 2)
		{
			pb(stack_a, stack_b);
			k++;
		}
		else
			ra(stack_a, 1);
		i++;
	}
	while (stack_size - k > 3)
	{
		pb(stack_a, stack_b);
		k++;
	}
}
