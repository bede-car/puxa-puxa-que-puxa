/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:56:16 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/06 20:06:57 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// int main(int arc, char **argv)
// {
// 	t_stack *a;	
// 	if(arc < 2 && argv) // se não passou argumentos
// 	{
// 		ft_printf("sem argumentos\n");//apenas teste
// 		return(ERROR);
// 	}
// 	//push_swap(++argv);
// 	parse(++argv); // analisar argumento por argumento
// 	ft_printf("parseado");
// 	t_stack *a = init_stack(argv);
// 	//duplicado
// 	//ordenado
// 	//sort
// 	return (SUCCESS);
// }

int	main(int arc, char **argv)
{
	if (arc < 2 && argv)
		return (ERROR);
	parse(++argv);
	return (SUCCESS);
}

void	parse(char **argv)
{
	t_data	*stack_a;

	validate_digits(argv);
	ft_printf("validate digits success\n");
	stack_a = init_data(argv);
	check_duplicated(stack_a);
	parsing_order(a);
// parsing_sorted(a);
//sort
}
