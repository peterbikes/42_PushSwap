/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:25:34 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/06 16:20:17 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one. */

#include "../../includes/push_swap.h"

void	rra(t_stack **stack_a, int flag)
{
	t_stack	*last_node;
	t_stack	*temp;

	last_node = *stack_a;
	temp = *stack_a;
	while (last_node->next != NULL)
	{
		temp = last_node;
		last_node = last_node->next;
	}
	temp->next = NULL;
	last_node->next = *stack_a;
	*stack_a = last_node;
	if (flag == 1)
		write(1, "rra\n", 4);
}
