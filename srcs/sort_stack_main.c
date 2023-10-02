/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:33:22 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/07 15:45:51 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_stack_main(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	sort_stack_push(stack_a, stack_b);
	sort_three(stack_a);
	while (*stack_b)
	{
		assign_data(stack_a, stack_b);
		choose_move(stack_a, stack_b);
		cheapest_action(stack_a, stack_b);
	}
	shift_to_sort(stack_a);
}
