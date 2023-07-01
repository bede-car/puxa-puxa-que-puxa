/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:56:16 by bede-car          #+#    #+#             */
/*   Updated: 2023/06/09 21:15:51 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int arc, char **argv)
{
	if(arc < 2 && argv) // se não passou argumentos
	{
		ft_printf("sem argumentos\n");//apenas teste
		return(ERROR);
	}
	parse(++argv); // analisar argumento por argumento, ignorando o nome do arquivo
	ft_printf("parseado");
	//init
	return (SUCCESS);
}