/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_it_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:26:44 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/06 16:42:43 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_it_sorted(t_stack **stack)
{
	t_stack	*temp;

	temp = *stack;
	while (temp->next != NULL)
	{
		if (temp->end_position > temp->next->end_position)
			return (0);
		temp = temp->next;
	}
	return (1);
}
