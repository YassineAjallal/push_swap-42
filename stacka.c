/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacka.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:38:43 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/30 15:03:20 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_positiona(t_stack *stack, int number)
{
	int	big;
	int	smallindex;
	int	i;
	int	bigvalue;

	big = ft_biggest(stack);
	bigvalue = stack->arr[big];
	smallindex = big;
	i = 0;
	while (i < stack->len)
	{
		if (stack->arr[i] < bigvalue)
		{
			if (number < stack->arr[i])
			{
				bigvalue = stack->arr[i];
				smallindex = i;
			}
		}
		i++;
	}
	return (smallindex);
}

void	ft_pusha(t_stack *s_a, t_stack *s_b)
{
	int	posa;
	int	small;
	int	big;

	while (s_b->len != 0)
	{
		posa = ft_positiona(s_a, s_b->arr[0]);
		big = ft_biggest(s_a);
		if (s_b->arr[0] > s_a->arr[big])
			ft_rotatea(s_a, big + 1);
		else
			ft_rotatea(s_a, posa);
		pa(s_a, s_b);
		ft_putstr_fd("pa\n", 1);
	}
	small = ft_smallest(s_a);
	ft_rotatea(s_a, small);
}
