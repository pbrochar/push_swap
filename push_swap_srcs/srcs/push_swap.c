/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <pbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 19:20:38 by pbrochar          #+#    #+#             */
/*   Updated: 2021/04/19 20:37:23 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	int	*stack_a;
	int	stack_size;

	stack_a = NULL;
	if (manage_error(argv[1], argc, &stack_a, &stack_size) == -1)
		return (0);
}
