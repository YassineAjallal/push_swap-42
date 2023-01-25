/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigsmall.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:28:23 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/24 11:15:00 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_biggest(t_stack *stack)
{
	int	i;
	int	tmpn;
	int	tmpi;

	i = 0;
	tmpn = stack->arr[0];
	tmpi = 0;
	while (i < stack->len)
	{
		if (stack->arr[i] > tmpn)
		{
			tmpn = stack->arr[i];
			tmpi = i;
		}
		i++;
	}
	return (tmpi);
}

int	ft_smallest(t_stack *stack)
{
	int	i;
	int	tmpn;
	int	tmpi;

	i = 0;
	tmpn = stack->arr[0];
	tmpi = 0;
	while (i < stack->len)
	{
		if (stack->arr[i] < tmpn)
		{
			tmpn = stack->arr[i];
			tmpi = i;
		}
		i++;
	}
	return (tmpi);
}
