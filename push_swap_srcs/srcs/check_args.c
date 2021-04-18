/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <pbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 19:55:25 by pbrochar          #+#    #+#             */
/*   Updated: 2021/04/18 19:58:47 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_args(const char *arg)
{
	int i;

	i = 0;
	while (arg[i])
	{
		if ((ft_isdigit(arg[i]) == 0) && (arg[i] != ' ' && arg[i] != '-'))
			return (-1);
		if ((arg[i] && i != 0) && (arg[i] == '-' && arg[i - 1] != ' '))
			return (-1);
		if (arg[i] == '-' && ft_isdigit(arg[i + 1]) == 0)
			return (-1);
		i++;
	}
	return (0);
}