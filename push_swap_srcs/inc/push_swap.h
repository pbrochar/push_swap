/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <pbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 19:21:20 by pbrochar          #+#    #+#             */
/*   Updated: 2021/04/19 21:07:33 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

# define PRINT_ERROR "Error\n"

int		check_string(const char *arg);
int		manage_int_array(const char *arg, int **stack_a, int *stack_size);
int		check_duplicate(int *stack_a, int elem);
void	free_stack(int *stack_a, int *stack_b);
void	manage_error(int *stack_a, int *stack_b);
#endif
