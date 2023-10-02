/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:50:11 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/14 12:38:45 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	choose_move(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp_b;
	int		size_a;
	int		size_b;

	temp_b = *stack_b;
	size_a = count_list_size(stack_a);
	size_b = count_list_size(stack_b);
	while (temp_b != NULL)
	{
		temp_b->cost_b = temp_b->current_pos;
		if (temp_b->current_pos > size_b / 2)
			temp_b->cost_b = (size_b - temp_b->current_pos) * -1;
		temp_b->cost_a = temp_b->goal_pos;
		if (temp_b->goal_pos > size_a / 2)
			temp_b->cost_a = (size_a - temp_b->goal_pos) * -1;
		temp_b = temp_b->next;
	}
}
