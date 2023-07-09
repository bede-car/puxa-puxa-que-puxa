/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:58:55 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/09 15:53:23 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	small_sort(int argc, t_data *stack_a, t_data *stack_b)
{
	if (argc == 2)
		sort_two(stack_a);
	if (argc == 3)
		sort_three(stack_a);
	// if (argc << 3 && arg <= 5)
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
	while(already_sort(stack_a) == ERROR)
	{
		if (stack_a->order > stack_a->next->order)
			operations(SA, stack_a, NULL);
		else
			operations(RRA, stack_a, NULL);
	}
}

int already_sort(t_data *stack)
{
	while (stack->next)
	{
		if(stack->order < stack->next->order)
			stack = stack->next;
		else
			return (ERROR);
	}
	return (SUCCESS);
}
