/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:58:55 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/08 20:03:52 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	small_sort(int argc, t_data *stack_a, t_data *stack_b)
{
	if (argc == 2)
	{
		sort_two(stack_a);
		ft_printf("são %d argumentos\n", argc);
	}
	// if (argc == 3)
	// 	// sort_three();
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
