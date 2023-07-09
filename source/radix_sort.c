/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:58:57 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/09 20:20:49 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	radix_sort(int argc, t_data **stack_a, t_data **stack_b)
{
	int bit_position;
	int limit;
	int compare;
	
	bit_position = 0;
	limit = count_bit_order(argc - 1);

	while (bit_position < limit) // already_sort(stack_a) == ERROR 
	{
		compare = 0;
		while(compare < argc - 1)
		{
			if(((*stack_a)->order >> bit_position & 1 ) == 0)
				operations(PB, stack_a, stack_b);
			else
				operations(RA, stack_a, stack_b);
			compare++;
		}
		while (*stack_b)
			operations(PA, stack_a, stack_b);
		bit_position++;
	}

}

int	count_bit_order(int argc)
{
	int result;
	int bigger;

	result = 0;
	bigger = argc;
	while(bigger != 0)
	{
		bigger = bigger / 2 ;
		result++;
	}
	return (result);
}
