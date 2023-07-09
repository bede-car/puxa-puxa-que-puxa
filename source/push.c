/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:03:56 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/08 21:41:53 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int push_a(t_data *stack_a, t_data *stack_b)
{
	if (!stack_b)
		return (ERROR);
	stack_a = stack_b;
	stack_b = stack_b->prev;
	return (SUCCESS);
}


int push_b(t_data *stack_a, t_data *stack_b)
{
	if (!stack_a)
		return (ERROR);
	stack_b = stack_a;
	stack_a = stack_a->next;
	return (SUCCESS);
}