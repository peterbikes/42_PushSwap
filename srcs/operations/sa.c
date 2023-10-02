/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:26:19 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/03 15:19:04 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements. */

#include "../../includes/push_swap.h"

void	sa(t_stack **stack_a)
{
	t_stack	*first_node;
	t_stack	*second_node;

	first_node = *stack_a;
	second_node = (*stack_a)->next;
	*stack_a = second_node;
	first_node->next = second_node->next;
	second_node->next = first_node;
	write(1, "sa\n", 3);
}
