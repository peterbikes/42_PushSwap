/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_list_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:46:19 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/03 13:59:27 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	count_list_size(t_stack **stack_a)
{
	t_stack		*temp;
	long long	i;

	temp = *stack_a;
	i = 0;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
