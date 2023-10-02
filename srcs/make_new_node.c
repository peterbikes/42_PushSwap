/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_new_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:47:13 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/03 17:34:31 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*make_new_node(int number, int end_position)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	new_node->number = number;
	new_node->end_position = end_position;
	new_node->current_pos = 0;
	new_node->goal_pos = 0;
	new_node->cost_a = 0;
	new_node->cost_b = 0;
	new_node->next = NULL;
	return (new_node);
}
