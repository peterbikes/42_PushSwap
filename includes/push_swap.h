/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psotto-m <psotto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:17:41 by psotto-m          #+#    #+#             */
/*   Updated: 2023/03/06 18:28:58 by psotto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	int				number;
	int				end_position;
	int				current_pos;
	int				goal_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

int		main(int ac, char **av);
int		ft_atoi(char *str);
int		is_digit(int ac, char **av);
int		is_double(int ac, char **av);
int		lowest_value(int ac, char **av, int lowest);
int		ab_value(int nb);
int		goal_position(t_stack **stack_a, int ep_b, int limit, int gp);
int		find_nbr(t_stack **stack, int nbr);
int		is_it_sorted(t_stack **stack);
int		count_list_size(t_stack **stack_a);
int		order(int ac, char **av);

void	validator(int ac, char **av);
void	free_stacks(t_stack **stack_a, t_stack **stack_b);
void	shift_to_sort(t_stack **stack_a);
void	error(void);
void	print_stacks(t_stack *head, char c);
void	sort_three(t_stack **stack);
void	sort_stack_main(t_stack **stack_a, t_stack **stack_b);
void	sort_stack_push(t_stack **stack_a, t_stack **stack_b);
void	assign_data(t_stack **stack_a, t_stack **stack_b);
void	current_position(t_stack **stack);
void	choose_move(t_stack **stack_a, t_stack **stack_b);
void	cheapest_action(t_stack **stack_a, t_stack **stack_b);
void	rotate_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b);
void	rotate_b(t_stack **b, int *cost);
void	rotate_a(t_stack **a, int *cost);

t_stack	*fill_stack(int ac, char **av);
t_stack	*make_new_node(int number, int end_position);

// OPERATIONS

void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a, int flag);
void	rb(t_stack **stack_b, int flag);
void	sa(t_stack **stack_a);
void	rrb(t_stack **stack_b, int flag);
void	rra(t_stack **stack_a, int flag);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);

#endif 
