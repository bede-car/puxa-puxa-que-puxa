/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:08:50 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/08 18:23:32 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//sa (swap a): Swap the first 2 elements at the top of stack a.
//Do nothing if there is only one or no elements.
void swap_a(t_data *stack_a)
{
	int swap;

	if (!stack_a || !stack_a->next)
		return ;
	swap = stack_a->order;
	stack_a->order = stack_a->next->order;
	stack_a->next->order = swap;
	swap = stack_a->number;
	stack_a->number = stack_a->next->number;
	stack_a->next->number = swap;
	ft_printf("sa\n");
}

// t_data swap_b(t_data *stack_a, t_data *stack_b)
// {
// 	if ()

// 	ft_printf("sb\n");
// }

// t_data swap_bouth(t_data *stack_a, t_data *stack_b)
// {
// 	if ()

// 	ft_printf("ss\n");
// }