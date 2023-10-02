/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:24:14 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/06 16:19:09 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one. */

#include "../../includes/push_swap.h"

void	ra(t_stack **stack_a, int flag)
{
	t_stack	*last_node;
	t_stack	*temp;

	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	last_node = *stack_a;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	temp->next = NULL;
	last_node->next = temp;
	if (flag == 1)
		write(1, "ra\n", 3);
}
