/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:56:16 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/09 17:29:11 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	operations(int shift, t_data **stack_a, t_data **stack_b)
{
	if (shift == SA && swap_a(stack_a) == 0)
		ft_printf("sa\n");
	else if (shift == SB && swap_b(stack_b) == 0)
		ft_printf("sb\n");
	else if (shift == SS && double_swap(stack_a, stack_b) == 0)
		ft_printf("ss\n");
	else if (shift == PA && push_a(stack_a, stack_b) == 0)
		ft_printf("pa\n");
	else if (shift == PB && push_b(stack_a, stack_b) == 0)
		ft_printf("pb\n");
	else if (shift == RA && rotate_a(stack_a) == 0)
		ft_printf("ra\n");
	else if (shift == RB && rotate_b(stack_b) == 0)
		ft_printf("rb\n");
	else if (shift == RR && double_rotate(stack_a, stack_b) == 0)
		ft_printf("rr\n");
	else if (shift == RRA && reverse_rotate_a(stack_a) == 0)
		ft_printf("rra\n");
	else if (shift == RRB && reverse_rotate_b(stack_b) == 0)
		ft_printf("rrb\n");
	else if (shift == RRR && double_reverse_rotate(stack_a, stack_a) == 0)
		ft_printf("rrr\n");
}

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

void	push_swap(int argc, t_data **stack_a, t_data **stack_b)
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
		ft_printf(" %d", stack_b->number);
		stack_b = stack_b->prev; 
	}
	ft_printf("\n");
}

int	main(int argc, char **argv)
{
	t_data	*stack_a;
	t_data	*stack_b;

	if (argc < 2 && argv)
		return (ERROR);
	stack_a = parse(++argv);
	stack_b = NULL;
	push_swap(--argc, &stack_a, &stack_b);
	print_my_sort(stack_a, stack_b);
	//apagar essa função
	destroy_linked_data_a(stack_a);
	destroy_linked_data_b(stack_b);
	return (SUCCESS);
}
