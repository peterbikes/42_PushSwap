/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:25:46 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/06 17:36:09 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rrb(t_stack **stack_b, int flag)
{
	t_stack	*last_node;
	t_stack	*temp;

	last_node = *stack_b;
	temp = *stack_b;
	while (last_node->next != NULL)
	{
		temp = last_node;
		last_node = last_node->next;
	}
	temp->next = NULL;
	last_node->next = *stack_b;
	*stack_b = last_node;
	if (flag == 1)
		write(1, "rrb\n", 4);
}
