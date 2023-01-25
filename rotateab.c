/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:06:45 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/24 11:17:03 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotatea(t_stack *stack, int pos)
{
	int	i;

	if (pos <= stack->len / 2)
	{
		i = 0;
		while (i < pos)
		{
			ra(stack);
			ft_putstr_fd("ra\n", 1);
			i++;
		}
	}
	else if (pos > stack->len / 2)
	{
		i = 0;
		while (i < stack->len - pos)
		{
			rra(stack);
			ft_putstr_fd("rra\n", 1);
			i++;
		}
	}
}

void	ft_rotateb(t_stack *stack, int pos)
{
	int	i;

	if (pos <= stack->len / 2)
	{
		i = 0;
		while (i < pos)
		{
			rb(stack);
			ft_putstr_fd("rb\n", 1);
			i++;
		}
	}
	else if (pos > stack->len / 2)
	{
		i = 0;
		while (i < stack->len - pos)
		{
			rrb(stack);
			ft_putstr_fd("rrb\n", 1);
			i++;
		}
	}
}
