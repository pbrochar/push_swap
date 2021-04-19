/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <pbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 19:20:38 by pbrochar          #+#    #+#             */
/*   Updated: 2021/04/19 21:07:58 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	int	*stack_a;
	int *stack_b;
	int	stack_size;

	stack_a = NULL;
	stack_b = NULL;
	if (argc != 2 || check_string(argv[1]) == -1
		|| manage_int_array(argv[1], &stack_a, &stack_size) == -1
		|| init_stack_b(*stack_b, stack_size) == -1)
	{
		manage_error(stack_a, NULL);
		return (0);
	}
}
