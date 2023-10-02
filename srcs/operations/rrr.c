/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:25:59 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/06 16:20:36 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* rrr : rra and rrb at the same time. */

#include "../../includes/push_swap.h"

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	write(1, "rrr\n", 4);
}
