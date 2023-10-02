/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:26:45 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/03 15:25:29 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ss : sa and sb at the same time. */

#include "../../includes/push_swap.h"

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	write(1, "ss\n", 3);
}
