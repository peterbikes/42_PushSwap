/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   current_position.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:49:05 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/06 12:37:37 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	current_position(t_stack **stack)
{
	t_stack	*temp;
	int		i;

	temp = *stack;
	i = 0;
	while (temp != NULL)
	{
		temp->current_pos = i;
		temp = temp->next;
		i++;
	}
}
