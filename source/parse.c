/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 20:55:02 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/06 20:03:32 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void check_duplicated(t_data *a)
{
	t_data *temporary;
	
	while(a->next)
	{
		temporary = a->next;
		while (temporary)
		{
			if (a->number == temporary->number)
			{
				ft_printf("Error\n");
				while (a->prev)
					a = a->prev;
				destroy_data(a);		
			}		
			temporary = temporary->next;
		}
		a = a->next;	
	}
}
// void parsing_order(t_stack *a)
// {
// 	//maio	
// }
// void parsing_sorted(t_stack *a)
// {
// }
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

	// parse
	// (recebe argumentos do terminal)
	// 	aceitar:
	// 		somente números [done]
	//		atoi -> char : int
	//		(int máx | int mín)
	// 		não duplicados
	// 		não ordenados