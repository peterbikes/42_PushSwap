/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:24:57 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/06 16:18:44 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* rr : ra and rb at the same time. */

#include "../../includes/push_swap.h"

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	write(1, "rr\n", 3);
}
