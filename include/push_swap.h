/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:51:05 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/06 22:59:22 by bede-car         ###   ########.fr       */
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

typedef struct s_data
{
	int number;
	int order;
	struct s_data *next;
	struct s_data *prev;
	// t_data next;
	// t_data prev;
}t_data;

// typedef struct s_data t_data;
t_data	*parse(char **argv);
void	push_swap(int argc, t_data *stack_a, t_data *stack_b);
void	validate_digits(char **argv);
void 	check_sorting(t_data *a);
void	indexing_order(t_data *a);
void	check_duplicated(t_data *a);
t_data *init_data(char **argv);
void	destroy_data(t_data *struc);
void	insert_node(t_data **a, t_data *addr);
long	ft_atol(const char *string);
t_data *new_node(int number);
// void	little_sort(t_data *stack_a);
// void	big_sort(t_data *stack_a);

#endif