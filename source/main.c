/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:56:16 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/01 21:43:39 by bede-car         ###   ########.fr       */
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
// 	parse(++argv); // analisar argumento por argumento, ignorando o nome do arquivo
// 	ft_printf("parseado");
// 	t_stack *a = init_stack(argv);
// 	//duplicado
// 	//ordenado
// 	//sort
// 	return (SUCCESS);
// }

int main(int arc, char **argv)
{
	if(arc < 2 && argv) // se não passou argumentos
	{
		ft_printf("Error\n");
		return(ERROR);
	}
	push_swap(++argv);
	return (SUCCESS);
}

