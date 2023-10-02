/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:07:42 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/06 16:22:43 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three(t_stack **stack)
{
	long long	a;
	long long	b;
	long long	c;

	a = (*stack)->end_position;
	b = (*stack)->next->end_position;
	c = (*stack)->next->next->end_position;
	if (a < b && a < c && c < b)
	{
		rra(stack, 1);
		sa(stack);
	}
	if (a > b && a < c && c > b)
		sa(stack);
	if (a < b && a > c && c < b)
		rra(stack, 1);
	if (a > b && a > c && c > b)
		ra(stack, 1);
	if (a > b && a > c && c < b)
	{
		ra(stack, 1);
		sa(stack);
	}
}
