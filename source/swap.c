/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:08:50 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/08 20:03:46 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int swap_a(t_data *stack_a)
{
	int swap;

	if (!stack_a || !stack_a->next)
		return (ERROR);
	swap = stack_a->order;
	stack_a->order = stack_a->next->order;
	stack_a->next->order = swap;
	swap = stack_a->number;
	stack_a->number = stack_a->next->number;
	stack_a->next->number = swap;
	return (SUCCESS);
}

int swap_b(t_data *stack_b)
{
	int swap;

	if (!stack_b || !stack_b->prev)
		return (ERROR);
	swap = stack_b->order;
	stack_b->order = stack_b->prev->order;
	stack_b->prev->order = swap;
	swap = stack_b->number;
	stack_b->number = stack_b->prev->number;
	stack_b->prev->number = swap;
	return (SUCCESS);
}

int double_swap(t_data *stack_a, t_data *stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
	return (SUCCESS);
}