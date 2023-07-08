/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:51:05 by bede-car          #+#    #+#             */
/*   Updated: 2023/07/08 18:34:02 by bede-car         ###   ########.fr       */
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
	struct s_data	*next;
	struct s_data	*prev;
	int				number;
	int				order;
}t_data;

/* Main */
t_data	*parse(char **argv);
void	push_swap(int argc, t_data *stack_a, t_data *stack_b);
int		main(int argc, char **argv);
/* Parser */
void	validate_digits(char **argv);
void	check_duplicated(t_data *a);
void	index_order(t_data *a);
void	check_sorting(t_data *a);
/* Init */
t_data	*init_linked_data(char **argv);
t_data	*new_node(int number);
void	insert_node(t_data **a, t_data *addr);
/* Destroy */
void	destroy_linked_data_a(t_data *struc);
void	destroy_linked_data_b(t_data *struc);
/* Atol */
long	ft_atol(const char *string);
/* Sort */
void	small_sort(int argc, t_data *stack_a, t_data *stack_b);
void	radix_sort(int argc, t_data *stack_a, t_data *stack_b);
void	sort_two(t_data *stack_a);
/* Moves */
void swap_a(t_data *stack_a);

#endif