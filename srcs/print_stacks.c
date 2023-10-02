/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:57:20 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/03 14:25:24 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_stacks(t_stack *head, char c)
{
	t_stack	*temp;

	temp = head;
	printf("STACK %c  : ", c);
	while (head != NULL)
	{
		printf("%d || ", head->number);
		head = head->next;
	}
	head = temp;
	printf("\nEND POS  : ");
	while (head != NULL)
	{
		printf("%d || ", head->end_position);
		head = head->next;
	}
	printf("\n\n");
}
