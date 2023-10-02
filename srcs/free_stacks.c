/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 13:28:57 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/03 13:45:56 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_stacks(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	if (!stack_a || !(*stack_a))
		return ;
	while (*stack_a)
	{
		temp = (*stack_a)->next;
		free(*stack_a);
		*stack_a = temp;
	}
	*stack_a = NULL;
	if (!stack_b || !(*stack_b))
		return ;
	while (*stack_b)
	{
		temp = (*stack_b)->next;
		free(*stack_b);
		*stack_b = temp;
	}
	*stack_b = NULL;
}
