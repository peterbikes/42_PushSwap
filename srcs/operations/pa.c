/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:19:56 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/03 15:17:58 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* pa (push a): Take the first element at 
the top of b and put it at the top of a.
Do nothing if b is empty. */

#include "../../includes/push_swap.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	temp = (*stack_b)->next;
	(*stack_b)->next = *stack_a;
	*stack_a = *stack_b;
	*stack_b = temp;
	write(1, "pa\n", 3);
}
