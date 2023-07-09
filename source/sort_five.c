/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:56:20 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/09 17:58:22 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_five(t_data **stack_a, t_data **stack_b)
{
	int	index;
	int	distance;

	index = 0;
	while ((*stack_a)->next->next->next)
	{
		distance = find_index(stack_a, index);
		if (distance == 0)
		{		
			operations(PB, stack_a, stack_b);
			index++;
		}				
		if (distance == 1)
			operations(SA, stack_a, stack_b);
		if (distance == 2)
			operations(RRA, stack_a, stack_b);
		if (distance == 3)
			operations(RRA, stack_a, stack_b);
		if (distance == 4)
			operations(RRA, stack_a, stack_b);
	}
	sort_three(stack_a);
	operations(PA, stack_a, stack_b);
	operations(PA, stack_a, stack_b);
}

int	find_index(t_data **stack_a, int index)
{
	int		counter;
	t_data	*auxiliar;

	auxiliar = *stack_a;
	counter = 0;
	while (auxiliar)
	{
		if (auxiliar->order != index)
			counter++;
		else
			return (counter);
		auxiliar = auxiliar->next;
	}
	return (ERROR);
}
