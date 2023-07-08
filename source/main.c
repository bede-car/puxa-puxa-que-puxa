/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:56:16 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/08 20:02:43 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


t_data	*parse(char **argv)
{
	t_data	*stack_a;

	validate_digits(argv);
	stack_a = init_linked_data(argv);
	check_duplicated(stack_a);
	index_order(stack_a);
	check_sorting(stack_a);
	return (stack_a);
}

void	push_swap(int argc, t_data *stack_a, t_data *stack_b)
{
	if (argc <= 5)
		small_sort(argc, stack_a, stack_b);
	else
		radix_sort(argc, stack_a, stack_b);
	(void)stack_a;
	(void)stack_b;
}

void print_my_sort(t_data *stack_a, t_data *stack_b)
{
	ft_printf("\nstack a-->");
		while (stack_a)
	{
		ft_printf(" %d", stack_a->number);
		stack_a = stack_a->next; 
	}
		ft_printf("\nstack b--> ");
		while (stack_b)
	{
		ft_printf("%d", stack_b->number);
		stack_b = stack_b->prev; 
	}
	ft_printf("\n");
}

void	operations(int move, t_data *stack_a, t_data *stack_b)
{

	if (move == SA && swap_a(stack_a) == 0)
		ft_printf("sa\n");
	else if (move == SB && swap_b(stack_b) == 0)
		ft_printf("sb\n");
	else if (move == SS && double_swap(stack_a, stack_b) == 0)
		ft_printf("ss\n");
	// if (move == PA && ft_push_a(b, a) == 0)
	// 	ft_printf("pa\n");
	// else if (move == PB && ft_push_b(a, b) == 0)
	// 	ft_printf("pb\n");
	// else if (move == RA && ft_rotate_a(a) == 0)
	// 	ft_printf("ra\n");
	// else if (move == RB && ft_rotate_b(b) == 0)
	// 	ft_printf("rb\n");
	// else if (move == RRA && ft_reverse_rotate_a(a) == 0)
	// 	ft_printf("rra\n");
	// else if (move == RRB && ft_reverse_rotate_b(b) == 0)
	// 	ft_printf("rrb\n");
	// else if (move == RR && ft_rotate_rotate(a, b) == 0)
	// 	ft_printf("rr\n");
	// else if (move == RRR && ft_reverse_rotate_rotate(a, b) == 0)
	// 	ft_printf("rrr\n");
	(void)stack_b;
}

int	main(int argc, char **argv)
{
	t_data	*stack_a;
	t_data	*stack_b;

	if (argc < 2 && argv)
		return (ERROR);
	stack_a = parse(++argv);
	stack_b = NULL;
	push_swap(--argc, stack_a, stack_b);
	print_my_sort(stack_a, stack_b);
	destroy_linked_data_a(stack_a);
	destroy_linked_data_b(stack_b);
	return (SUCCESS);
}