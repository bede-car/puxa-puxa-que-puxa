/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 18:58:22 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/01 21:35:00 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
// <tipo_retorno> <nome_função>(<argumentos_função>)
// <t_stack *> <new_node> (<int number>)
t_stack *new_node(int number) // retorna ponteiro de um novo nó
{
	t_stack *new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if(!new)
		return(NULL);
	new->number = number;
	new->order = 0;
	new->next = NULL;
	new->prev = NULL;
	return(new);
}

void insert_node(t_stack **a, t_stack *addr)
{
	t_stack *aux;
	if((*a) == NULL) // se a stack não tem nó ainda
	{
		*a = addr; // coloca como primeiro nó o recem criado
		return ;
	}
	aux = *a; //salvo o endereço desse nó
	while(aux->next) //verifico se tem endereço pro proximo e avanço até ser NULL (inserir o nó)
		aux = aux->next;//atualizo endereço 
	aux->next = addr; //aponto o novo nó
	addr->prev = aux; //anoto o anterior
}

t_stack *init_stack(char **argv)
{
	t_stack *init; // declarei a stack a
	t_stack *addr;
	long	number;
	int 	index;
	
	index = 0;
	init = NULL;
	while(argv[index])
	{
		number = ft_atol(argv[index]); // char int
		// if (number == LONG_ERROR)
		// 	return ;
		// 	//QUEBRA E APAGA OS NÓS // INT MAX INT MIN
		addr = new_node(number);
		insert_node(&init, addr);
	}
}