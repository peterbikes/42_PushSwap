/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:26:29 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/03 15:18:51 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements. */

#include "../../includes/push_swap.h"

void	sb(t_stack **stack_b)
{
	t_stack	*first_node;
	t_stack	*second_node;

	first_node = *stack_b;
	second_node = (*stack_b)->next;
	*stack_b = second_node;
	first_node->next = second_node->next;
	second_node->next = first_node;
	write(1, "sb\n", 3);
}
