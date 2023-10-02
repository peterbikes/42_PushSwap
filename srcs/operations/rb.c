/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:24:31 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/06 16:19:51 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one. */

#include "../../includes/push_swap.h"

void	rb(t_stack **stack_b, int flag)
{
	t_stack	*last_node;
	t_stack	*temp;

	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	last_node = *stack_b;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	temp->next = NULL;
	last_node->next = temp;
	if (flag == 1)
		write(1, "rb\n", 3);
}
