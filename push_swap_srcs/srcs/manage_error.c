/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <pbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 20:29:45 by pbrochar          #+#    #+#             */
/*   Updated: 2021/04/19 21:07:17 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	free_stack(int *stack_a, int *stack_b)
{
	if (stack_a)
		free(stack_a);
	if (stack_b)
		free(stack_b);
}

void	manage_error(int *stack_a, int *stack_b)
{
	free_stack(stack_a, stack_b);
	ft_printf(PRINT_ERROR);
}
