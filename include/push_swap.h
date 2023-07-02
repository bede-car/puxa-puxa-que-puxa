/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:51:05 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/01 21:15:14 by bede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libftprintf/source/ft_printf.h"

# define ERROR EXIT_FAILURE
# define SUCCESS EXIT_SUCCESS
# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define LONG_ERROR 4300000000

void parse(char **argv);

typedef struct s_stack t_stack;
struct s_stack
{
	int number;
	int order;
	struct s_stack next;
	t_stack prev;
};


#endif