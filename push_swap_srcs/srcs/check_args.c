/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <pbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 19:55:25 by pbrochar          #+#    #+#             */
/*   Updated: 2021/04/19 17:31:57 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_args(const char *arg)
{
	int i;
	int	is_nbr;

	i = 0;
	is_nbr = 0;
	while (arg[i])
	{
		if ((ft_isdigit(arg[i]) == 0) && (arg[i] != ' ' && arg[i] != '-'))
			return (-1);
		if ((arg[i] && i != 0) && (arg[i] == '-' && arg[i - 1] != ' '))
			return (-1);
		if (arg[i] == '-' && ft_isdigit(arg[i + 1]) == 0)
			return (-1);
		if (ft_isdigit(arg[i]))
			is_nbr++;
		i++;
	}
	if (is_nbr == 0)
		return (-1);
	return (0);
}
