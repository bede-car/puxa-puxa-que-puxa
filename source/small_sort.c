/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:58:55 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/09 17:19:22 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	small_sort(int argc, t_data **stack_a, t_data **stack_b)
{
	if (argc == 2)
		sort_two(stack_a);
	if (argc == 3)
		sort_three(stack_a);
	if (argc > 3 && argc <= 5)
		sort_five(stack_a, stack_b);

	(void)stack_a;
	(void)stack_b;	
}

void	sort_two(t_data **stack_a)
{
	operations(SA, stack_a, NULL);
}

void	sort_three(t_data **stack_a)
{
	while(already_sort(stack_a) == ERROR)
	{
		if ((*stack_a)->order > (*stack_a)->next->order)
			operations(SA, stack_a, NULL);
		else
			operations(RRA, stack_a, NULL);
	}
}

int already_sort(t_data **stack)
{
	t_data *auxiliar;

	auxiliar = *stack;
	while (auxiliar->next)
	{
		if(auxiliar->order < auxiliar->next->order)
			auxiliar = auxiliar->next;
		else
			return (ERROR);
	}
	return (SUCCESS);
}


void sort_five(t_data **stack_a, t_data **stack_b)
{
	int	index;
	int distance;

	index = 0;
	while ((*stack_a)->next->next)
	{
		distance = find_index(stack_a, index);
		if(distance == 0)
			operations(PB, stack_a, stack_b);
		if(distance == 1)
		{			
			operations(SA, stack_a, stack_b);
			operations(PB, stack_a, stack_b);
		}
		if(distance == 2)
		{
			operations(SA, stack_a, stack_b);
			operations(PB, stack_a, stack_b);
		}
		if(distance == 3)
		{
			operations(RRA, stack_a, stack_b);
			operations(RRA, stack_a, stack_b);
			operations(PB, stack_a, stack_b);
		}	
		if(distance == 4)
		{
			operations(RRA, stack_a, stack_b);
			operations(PB, stack_a, stack_b);
		}
		index++;				
	}
}

int find_index(t_data **stack_a, int index)
{
	int		counter;
	t_data	*auxiliar;

	auxiliar = *stack_a;
	counter = 0;
	while(auxiliar)
	{
		if(auxiliar->order != index)
			counter++;
		else
			return (counter);		
		auxiliar = auxiliar->next;
	}
	return (ERROR);
}