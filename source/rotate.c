/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:04:57 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/09 17:25:01 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	rotate_a(t_data **stack_a)
{
	int		swap_number;
	int		swap_order;
	t_data	*temporary;

	if (!stack_a || !(*stack_a)->next)
		return (ERROR);
	swap_number = (*stack_a)->number;
	swap_order = (*stack_a)->order;
	temporary = *stack_a;
	while (temporary->next)
	{
		temporary->number = temporary->next->number;
		temporary->order = temporary->next->order;
		temporary = temporary->next;
	}
	temporary->number = swap_number;
	temporary->order = swap_order;
	return (SUCCESS);
}

int	rotate_b(t_data **stack_b)
{
	int		swap_number;
	int		swap_order;
	t_data	*temporary;

	if (!stack_b || !(*stack_b)->prev)
		return (ERROR);
	swap_number = (*stack_b)->number;
	swap_order = (*stack_b)->order;
	temporary = *stack_b;
	while (temporary->prev)
	{
		temporary->number = temporary->prev->number;
		temporary->order = temporary->prev->order;
		temporary = temporary->prev;
	}
	temporary->number = swap_number;
	temporary->order = swap_order;
	return (SUCCESS);
}

int	double_rotate(t_data **stack_a, t_data **stack_b)
{
	if (!*stack_a || !(*stack_a)->next || !*stack_b || !(*stack_b)->prev)
		return (ERROR);
	rotate_a(stack_a);
	rotate_b(stack_b);
	return (SUCCESS);
}
