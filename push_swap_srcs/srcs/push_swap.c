/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <pbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 19:20:38 by pbrochar          #+#    #+#             */
/*   Updated: 2021/04/19 17:45:52 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc != 2 || check_args(argv[1]) == -1)
	{
		ft_printf(PRINT_ERROR);
		return (0);
	}
	if (manage_int_array(argv[1]) == -1)
	{
		ft_printf(PRINT_ERROR);
		return (0);
	}
	return (0);
}
