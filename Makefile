CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = push_swap
BONUS = checker
MAIN_MANDATORY = ./srcs/main.c
SRCS = ./srcs/validator.c ./srcs/error.c ./srcs/fill_stacks.c ./srcs/ft_atoi.c \
		./srcs/is_digit.c ./srcs/is_double.c ./srcs/lowest_value.c ./srcs/make_new_node.c \
		./srcs/order.c ./srcs/print_stacks.c ./srcs/free_stacks.c ./srcs/count_list_size.c \
		./srcs/operations/sa.c ./srcs/operations/rrr.c ./srcs/operations/rr.c ./srcs/operations/ss.c \
		./srcs/operations/ra.c ./srcs/operations/rra.c ./srcs/operations/pa.c ./srcs/operations/pb.c \
		./srcs/operations/rb.c ./srcs/operations/rrb.c ./srcs/operations/sb.c ./srcs/sort_three.c \
		./srcs/sort_stack_main.c ./srcs/sort_stack_push.c ./srcs/assign_data.c ./srcs/current_position.c \
		./srcs/goal_position.c ./srcs/choose_move.c ./srcs/ab_value.c ./srcs/cheapest_action.c \
		./srcs/rotate_a.c ./srcs/rotate_b.c ./srcs/rotate_both.c ./srcs/is_it_sorted.c ./srcs/shift_to_sort.c \
		./srcs/find_nbr.c
		

OBJS = $(SRCS:.c=.o) $(MAIN_MANDATORY:.c=.o)

${NAME}: ${OBJS}
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

bonus: $(BONUS)

gdb:
	gcc -g $ $(SRCS) $(MAIN_MANDATORY) -o TEST

clean:
	rm -f $(OBJS) $(BONUS_OBJS)
	
fclean: clean
	rm -f $(NAME) $(BONUS) $(BONUS_OBJ)
	
re: fclean all
