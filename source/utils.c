/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 20:55:05 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/01 21:23:25 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long	ft_atol(const char *string)
{
	long	number;
	int		index;
	int		sign;

	number = 0;
	index = 0;
	sign = 1;
	if (string == NULL)
		return (0);
	while (string[index] == ' ' || (string[index] >= 9 && string[index] <= 13))
		index++;
	if (string[index] == '-' || string[index] == '+')
	{
		if (string[index] == '-')
		sign *= -1;
		index++;
	}
	while (string[index] >= '0' && string[index] <= '9')
	{
		number = (string[index++] - '0') + (number * 10);
		if ((number * sign) > INT_MAX || (number * sign) < INT_MIN)
			return (LONG_ERROR);
	}
	return (number * sign);
}
