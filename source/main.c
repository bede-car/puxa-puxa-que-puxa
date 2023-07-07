/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:56:16 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/07 11:34:03 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_data *stack_a;
	t_data *stack_b;
	
	if (argc < 2 && argv)
		return (ERROR);
	stack_a = parse(++argv);
	stack_b = NULL;
	push_swap(--argc, stack_a, stack_b);
	destroy_linked_data(stack_a);
	destroy_linked_data(stack_b);
	return (SUCCESS);
}

t_data	*parse(char **argv)
{
	t_data	*stack_a;

	validate_digits(argv);
	stack_a = init_linked_data(argv);
	check_duplicated(stack_a);
	index_order(stack_a);
	check_sorting(stack_a);
	return(stack_a);
}
