/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <pbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 19:21:20 by pbrochar          #+#    #+#             */
/*   Updated: 2021/04/19 20:33:46 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

# define PRINT_ERROR "Error\n"

int	check_string(const char *arg);
int	manage_int_array(const char *arg, int **stack_a, int *stack_size);
int	manage_error(const char *arg, int argc, int **stack_a, int *size);
int	check_duplicate(int *stack_a, int size);
#endif
