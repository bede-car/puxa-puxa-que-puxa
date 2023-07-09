/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 20:55:02 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/09 17:14:24 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_duplicated(t_data *stack_a)
{
	t_data	*temporary;

	while (stack_a->next)
	{
		temporary = stack_a->next;
		while (temporary)
		{
			if (stack_a->number == temporary->number)
			{
				ft_printf("Error\n");
				while (stack_a->prev)
					stack_a = stack_a->prev;
				destroy_linked_data_a(stack_a);
				exit(ERROR);
			}		
			temporary = temporary->next;
		}
		stack_a = stack_a->next;
	}
}

void	index_order(t_data *stack_a)
{
	t_data	*temporary;

	while (stack_a)
	{
		temporary = stack_a;
		while (temporary->prev)
			temporary = temporary->prev;
		while (temporary)
		{
			if (stack_a->number > temporary->number)
				stack_a->order++;
			temporary = temporary->next;
		}
		stack_a = stack_a->next;
	}
}

void	check_sorting(t_data *stack_a)
{
	while (stack_a->next)
	{
		if (stack_a->next->order - stack_a->order == 1)
			stack_a = stack_a->next;
		else
			return ;
	}
	while (stack_a->prev)
		stack_a = stack_a->prev;
	destroy_linked_data_a(stack_a);
	exit(SUCCESS);
}

void	error_validate(char *argument)
{
	ft_printf("Error\n");
	free(argument);
	exit (ERROR);
}

void	validate_digits(char **argv)
{
	int		i;
	int		j;
	char	*argument;

	i = 0;
	while (argv[i])
	{
		j = 0;
		argument = ft_strtrim(argv[i], " ");
		if (!argument)
			error_validate(argument);
		if (argument[j] == '+' || argument[j] == '-' )
			j++;
		if (argument[j] == '\0')
			error_validate(argument);
		while (argument[j])
		{
			if (ft_isdigit(argument[j]) == 0)
				error_validate(argument);
			j++;
		}
		i++;
		free(argument);
	}
}
