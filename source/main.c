/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:56:16 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/06 22:05:30 by bede-car         ###   ########.fr       */
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
	//parse(++argc, ++argv);
	return (SUCCESS);
}

//void	parse(int argc, char **argv)
void	parse(char **argv)
{
	t_data	*stack_a;

	validate_digits(argv);
	stack_a = init_data(argv);
	check_duplicated(stack_a);
	indexing_order(stack_a);
	check_sorting(stack_a);
	while (stack_a)
	{
		ft_printf("numero: %d e seu index: %d \n", stack_a->number, stack_a->order);
		stack_a = stack_a->next;
	}
	// if (argc <= 5)
	// 	little_sort(stack_a);
	// else
	// 	big_sort(stack_a);	
}
