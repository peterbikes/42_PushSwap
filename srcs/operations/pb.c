/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:23:43 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/03 15:20:22 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* pb (push b): Take the first element at 
the top of a and put it at the top of b.
Do nothing if a is empty. */

#include "../../includes/push_swap.h"

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	temp = (*stack_a)->next;
	(*stack_a)->next = *stack_b;
	*stack_b = *stack_a;
	*stack_a = temp;
	write(1, "pb\n", 3);
}
