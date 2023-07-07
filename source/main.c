/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:56:16 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/06 22:58:28 by bede-car         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	t_data *stack_a;
	t_data *stack_b;
	
	if (argc < 2 && argv)
		return (ERROR);
	stack_a = parse(++argv);
	stack_b = NULL;
	push_swap(--argc, stack_a, stack_b);
	destroy_data(stack_a);
	destroy_data(stack_b);
	return (SUCCESS);
}

t_data	*parse(char **argv)
{
	t_data	*stack_a;

	validate_digits(argv);
	stack_a = init_data(argv);
	check_duplicated(stack_a);
	indexing_order(stack_a);
	check_sorting(stack_a);
	return(stack_a);
}
