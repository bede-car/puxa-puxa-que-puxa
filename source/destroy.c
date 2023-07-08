/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:31:51 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/08 18:33:06 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	destroy_linked_data_a(t_data *struc)
{
	t_data	*temporary;

	while (struc)
	{
		temporary = struc->next;
		free(struc);
		struc = temporary;
	}
	struc = (NULL);
}

void	destroy_linked_data_b(t_data *struc)
{
	t_data	*temporary;

	while (struc)
	{
		temporary = struc->prev;
		free(struc);
		struc = temporary;
	}
	struc = (NULL);
}
