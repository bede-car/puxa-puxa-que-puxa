/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 18:58:22 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/08 18:42:57 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_data	*new_node(int number)
{
	t_data	*new_node;

	new_node = (t_data *)malloc(sizeof(t_data));
	if (!new_node)
		return (NULL);
	new_node->number = number;
	new_node->order = 0;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

void	insert_node(t_data **a, t_data *address)
{
	t_data	*temporary;

	if ((*a) == NULL)
	{
		*a = address;
		return ;
	}
	temporary = *a;
	while (temporary->next)
		temporary = temporary->next;
	temporary->next = address;
	address->prev = temporary;
}

t_data	*init_linked_data(char **argv)
{
	t_data	*head_stack;
	t_data	*address;
	long	number;
	int		index;

	head_stack = NULL;
	index = 0;
	while (argv[index])
	{
		number = ft_atol(argv[index]);
		if (number == LONG_ERROR)
		{
			ft_printf("Error\n");
			destroy_linked_data_a(head_stack);
			exit(ERROR);
		}
		address = new_node(number);
		insert_node(&head_stack, address);
		index++;
	}
	return (head_stack);
}
