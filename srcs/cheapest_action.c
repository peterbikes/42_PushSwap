/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest_action.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:56:10 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/07 10:44:09 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	action(t_stack **stack_a, t_stack **stack_b, int cost_a, int cost_b)
{
	rotate_both(stack_a, stack_b, &cost_a, &cost_b);
	rotate_a(stack_a, &cost_a);
	rotate_b(stack_b, &cost_b);
	pa(stack_a, stack_b);
}

void	cheapest_action(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;
	int		cheap;
	int		cost_a;
	int		cost_b;

	temp = *stack_b;
	cheap = 2147483647;
	while (temp != NULL)
	{
		if (ab_value(temp->cost_a) + ab_value(temp->cost_b) < cheap)
		{
			cheap = ab_value(temp->cost_b) + ab_value(temp->cost_a);
			cost_a = temp->cost_a;
			cost_b = temp->cost_b;
		}
		temp = temp->next;
	}
	action(stack_a, stack_b, cost_a, cost_b);
}
