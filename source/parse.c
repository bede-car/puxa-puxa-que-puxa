/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 20:55:02 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/01 22:13:07 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/push_swap.h"

void parsing_duplicated(t_stack *a)
{
	//comparar number.nó 
	while (a->next)
	{
		while()
	}
}

void parsing_order(t_stack *a)
{
	//maior
	
}

void parsing_sorted(t_stack *a)
{
	
	
}

void parsing_is_digit(char **argv)
{
	int 	index;
	int 	caracter;
	char	*arg;

	index = 0;
	while(argv[index])
	{
		caracter = 0;
		arg = ft_strtrim(argv[index], " "); //remove os espaços
		if(arg[caracter] == '+' || arg[caracter] == '-' ) // se o primeiro caracter for + ou - eu aceito e prossegue
			caracter++;
		if(arg[caracter] == '\0') // string não é nula
			{
			free(arg);
			exit(ERROR);
			}
		while(arg[caracter])//enquanto tiver caracter da string para conferir
		{
			if(ft_isdigit(arg[caracter]) == 0)
			{
				ft_printf("não é digito");
				exit(ERROR);
			}
			caracter++;//verifica o proximo
		}
		index++;//proxima string
	free(arg);
	}
}


void push_swap(char **argv)
{
	t_stack *a;
	t_stack *b;
	
	parsing_is_digit(argv);
	t_stack *a = init_stack(argv);
	parsing_duplicated(a);
	parsing_order(a);
	parsing_sorted(a);
	//sort
}


	// parse
	// (recebe argumentos do terminal)
	// 	aceitar:
	// 		somente números [done]
	//		atoi -> char : int
	//		(int máx | int mín)
	// 		não duplicados
	// 		não ordenados