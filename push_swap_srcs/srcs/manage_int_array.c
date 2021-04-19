/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_int_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <pbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:16:12 by pbrochar          #+#    #+#             */
/*   Updated: 2021/04/19 21:07:42 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

static int	nb_size(int nbr)
{
	int size;

	size = 1;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= -1;
		size++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		size++;
	}
	return (size);
}

static int	check_int_overflow(int temp, const char *arg)
{
	int i;

	i = 0;
	if (temp != 0 && temp != -1)
		return (0);
	while (arg[i] == '-' || arg[i] == '0')
		i++;
	if (arg[i] == ' ' || !arg[i])
		return (0);
	if ((temp == -1 && (ft_isdigit(arg[i + 1]) || !arg[i]))
		|| (temp == 0 && (arg[i + 1] != ' ' || !arg[i])))
		return (-1);
	return (0);
}

static int	skip_char(int i, const char *arg)
{
	while (ft_isdigit(arg[i]) || arg[i] == '-')
		i++;
	while (ft_isspace(arg[i]))
		i++;
	return (i);
}

int			manage_int_array(const char *arg, int **stack_a, int *stack_size)
{
	int	i;
	int	elem;
	int	len;

	i = 0;
	len = ft_strlen(arg);
	elem = 0;
	while (i < len)
	{
		*stack_a = ft_mem_exp(*stack_a, sizeof(int) * elem, \
										sizeof(int) * (elem + 1));
		if (*stack_a == NULL)
			return (-1);
		(*stack_a)[elem] = ft_atoi(&arg[i]);
		if (check_int_overflow((*stack_a)[elem], &arg[i]) == -1)
			return (-1);
		if (check_duplicate(*stack_a, elem) == -1)
			return (-1);
		i = skip_char(i, arg);
		elem++;
	}
	*stack_size = elem;
	return (0);
}

int			init_stack_b(int **stack_b, int stack_size)
{
	*stack_b = malloc(sizeof(int) * stack_size);
	if (stack_b == NULL)
		return (-1);
	return (0);
}
