/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:12:19 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/03 15:32:33 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		stack_size;

	validator(ac, av);
	stack_b = NULL;
	stack_a = fill_stack(ac, av);
	stack_size = count_list_size(&stack_a);
	if (stack_size == 2)
		sa(&stack_a);
	if (stack_size == 3)
		sort_three(&stack_a);
	else if (stack_size > 3)
		sort_stack_main(&stack_a, &stack_b);
	free_stacks(&stack_a, &stack_b);
}
