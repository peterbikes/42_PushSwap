/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:44:53 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/03 13:25:38 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*fill_stack(int ac, char **av)
{
	t_stack	*head;
	t_stack	*temp;
	t_stack	*new_node;
	int		end_position;
	int		i;

	head = NULL;
	new_node = NULL;
	temp = NULL;
	i = 1;
	while (i < ac)
	{
		end_position = lowest_value(ac, av, ft_atoi(av[i]));
		new_node = make_new_node(ft_atoi(av[i]), end_position);
		if (temp == NULL)
		{
			temp = new_node;
			head = temp;
		}
		temp->next = new_node;
		temp = new_node;
		i++;
	}
	return (head);
}
