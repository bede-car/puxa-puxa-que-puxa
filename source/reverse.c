/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 01:00:33 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/09 14:52:36 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	reverse_rotate_a(t_data *stack_a)
{
	int		swap_number;
	int		swap_order;
	t_data	*temporary;

	if (!stack_a || !stack_a->next)
		return (ERROR);
	temporary = stack_a;
	while (temporary->next)
		temporary = temporary->next;
	swap_number = temporary->number;
	swap_order = temporary->order;
	while (temporary->prev != stack_a)
	{
		temporary->number = temporary->prev->number;
		temporary->order = temporary->prev->order;
		temporary = temporary->prev;
	}
	temporary->number = swap_number;
	temporary->order = swap_order;
	return (SUCCESS);
}

int	reverse_rotate_b(t_data *stack_b)
{
	int		swap_number;
	int		swap_order;
	t_data	*temporary;

	if (!stack_b || !stack_b->prev)
		return (ERROR);
	temporary = stack_b;
	while (temporary->prev)
		temporary = temporary->prev;
	swap_number = temporary->number;
	swap_order = temporary->order;
	while (temporary->next != stack_b)
	{
		temporary->number = temporary->next->number;
		temporary->order = temporary->next->order;
		temporary = temporary->next;
	}
	temporary->number = swap_number;
	temporary->order = swap_order;
	return (SUCCESS);
}

int	double_reverse_rotate(t_data *stack_a, t_data *stack_b)
{
	if (!stack_a || !stack_a->next || !stack_b || !stack_b->prev)
		return (ERROR);
	reverse_rotate_a(stack_a);
	reverse_rotate_b(stack_b);
	return (SUCCESS);
}
