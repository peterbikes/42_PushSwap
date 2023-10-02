/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:54:45 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/14 16:53:58 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	assign_data(t_stack **stack_a, t_stack **stack_b)
{
	t_stack		*temp;
	int			gpos;

	temp = *stack_b;
	current_position(stack_a);
	current_position(stack_b);
	gpos = 0;
	while (temp != NULL)
	{
		gpos = goal_position(stack_a, temp->end_position, 2147483647, gpos);
		temp->goal_pos = gpos;
		temp = temp->next;
	}
}
