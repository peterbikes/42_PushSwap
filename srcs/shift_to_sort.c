/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_to_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:41:39 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/06 17:18:38 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	shift_to_sort(t_stack **stack_a)
{
	int	first_number;

	first_number = find_nbr(stack_a, 1);
	if (first_number > count_list_size(stack_a) / 2)
	{
		while (is_it_sorted(stack_a) != 1)
			rra(stack_a, 1);
	}
	else
	{
		while (is_it_sorted(stack_a) != 1)
			ra(stack_a, 1);
	}
}
