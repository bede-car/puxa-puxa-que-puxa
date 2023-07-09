/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:58:55 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/09 03:38:07 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	small_sort(int argc, t_data *stack_a, t_data *stack_b)
{
	if (argc == 2)
		sort_two(stack_a);
	if (argc == 3)
		sort_three(sta);
	// 	ft_printf("são %d argumentos\n", argc);
	// if (argc == 4)
	// 	//sort_four();
	// 	ft_printf("são %d argumentos\n", argc);	
	// if (argc == 5)
	// 	//sort_five();
	// 	ft_printf("são %d argumentos\n", argc);
	(void)stack_a;
	(void)stack_b;	
}

void	sort_two(t_data *stack_a)
{
	operations(SA, stack_a, NULL);
}

void	sort_three(t_data *stack_a)
{
	operations(SA, stack_a, NULL);
}
// 0 1 2

// if (stack_a->order == 0) [ 0 2 1 ]
// 0 2 1 -> RRA
// 1 0 2 -> SA
// 0 1 2

// if (stack_a ->order == 1)
// 1 0 2 -> SA
// 0 1 2
//
// 1 2 0 -> RRA
// 0 1 2

// if(stack_a ->order == 2)
// 2 0 1 -> RA
// 0 1 2
//
// 2 1 0 -> SA
// 1 2 0 - RRA
// 0 1 2
//

// 1º < 2°

// 0 2 1 -> RRA
// 1 2 0 -> RRA

// if(stack_a->order < stack_a->next->order)
