/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_nbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:34:33 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/06 16:45:49 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_nbr(t_stack **stack, int nbr)
{
	t_stack		*temp;
	long long	i;

	temp = *stack;
	i = 1;
	while (temp != NULL)
	{
		if (temp->end_position == nbr)
			return (i);
		else
			temp = temp->next;
		i++;
	}
	return (0);
}
