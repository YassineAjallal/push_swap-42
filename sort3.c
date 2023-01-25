/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:20:55 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/25 14:26:01 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_firstc(t_stack *stack)
{
	if (stack->arr[1] > stack->arr[2])
	{
		ra(stack);
		ft_putstr_fd("ra\n", 1);
		sa(stack);
	}
	else
	{
		ra(stack);
		ft_putstr_fd("ra\n", 1);
	}
}

void	ft_secondc(t_stack *stack)
{
	if (stack->arr[0] > stack->arr[1])
		sa(stack);
	else if (stack->arr[0] > stack->arr[2])
	{
		rra(stack);
		ft_putstr_fd("rra\n", 1);
	}
	else if (stack->arr[1] > stack->arr[2])
	{
		rra(stack);
		ft_putstr_fd("rra\n", 1);
		sa(stack);
	}
}

void	ft_sort3(t_stack *stack)
{
	if ((stack->arr[0] > stack->arr[1]) && stack->arr[0] > stack->arr[2])
		ft_firstc(stack);
	else
		ft_secondc(stack);
}
