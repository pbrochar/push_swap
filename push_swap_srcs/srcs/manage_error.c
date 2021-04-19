/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <pbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 20:29:45 by pbrochar          #+#    #+#             */
/*   Updated: 2021/04/19 20:37:59 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	manage_error(const char *arg, int argc, int **stack_a, int *size)
{
	if (argc != 2 || check_string(arg) == -1
		|| manage_int_array(arg, stack_a, size) == -1
		|| check_duplicate(*stack_a, *size) == -1)
	{
		if (*stack_a)
			free(*stack_a);
		ft_printf(PRINT_ERROR);
		return (-1);
	}
	return (0);
}
