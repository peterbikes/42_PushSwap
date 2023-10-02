/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   goal_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:14:59 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/14 17:06:12 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	goal_position(t_stack **stack_a, int ep_b, int limit, int goal_position)
{
	t_stack	*temp;

	temp = *stack_a;
	while (temp != NULL)
	{
		if (temp->end_position > ep_b && temp->end_position < limit)
		{
			limit = temp->end_position;
			goal_position = temp->current_pos;
		}
		temp = temp->next;
	}
	if (limit != 2147483647)
		return (goal_position);
	temp = *stack_a;
	while (temp != NULL)
	{
		if (temp->end_position < limit)
		{
			limit = temp->end_position;
			goal_position = temp->current_pos;
		}
		temp = temp->next;
	}
	return (goal_position);
}
