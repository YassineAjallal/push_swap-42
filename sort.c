/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:31:30 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/23 22:32:56 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void ft_sort3(s_stack *stack)
{
	if ((stack->arr[0] > stack->arr[1]) && stack->arr[0] > stack->arr[2])
	{
		if(stack->arr[1] > stack->arr[2])
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
	else
	{
		if(stack->arr[0] > stack->arr[1])
			sa(stack);
		else if(stack->arr[0] > stack->arr[2])
		{
			rra(stack);
			ft_putstr_fd("rra\n", 1);
		}
		else if (stack->arr[1] > stack->arr[2]){
			rra(stack);
			ft_putstr_fd("rra\n", 1);
			sa(stack);
		}
	}
}

void ft_sort4(s_stack *s_a, s_stack *s_b)
{
	int small;
	
	small = ft_smallest(s_a);
	ft_rotatea(s_a, small);
	pb(s_a, s_b);
	ft_putstr_fd("pb\n", 1);
	ft_sort3(s_a);
	pa(s_a, s_b);
	ft_putstr_fd("pa\n", 1);
}

void ft_sort5(s_stack *s_a, s_stack *s_b)
{
	int small;
	small = ft_smallest(s_a);
	ft_rotatea(s_a, small);
	pb(s_a, s_b);
	ft_putstr_fd("pb\n", 1);
	ft_sort4(s_a, s_b);
	pa(s_a, s_b);
	ft_putstr_fd("pa\n", 1);
}

void ft_twornb(s_stack *s_a, s_stack *s_b)
{
	int small;
	int big;
	
	big = ft_biggest(s_a);
	small = ft_smallest(s_a);
	if (big < small)
	{
		big = ft_biggest(s_a);
		ft_rotatea(s_a, big);
		pb(s_a, s_b);
		ft_putstr_fd("pb\n", 1);
		small = ft_smallest(s_a);
		ft_rotatea(s_a, small);
		pb(s_a, s_b);
		ft_putstr_fd("pb\n", 1);
	}
	else if (big > small)
	{
		small = ft_smallest(s_a);
		ft_rotatea(s_a, small);
		pb(s_a, s_b);
		ft_putstr_fd("pb\n", 1);
		big = ft_biggest(s_a);
		ft_rotatea(s_a, big);
		pb(s_a, s_b);
		ft_putstr_fd("pb\n", 1);
	}
}
void ft_sort(s_stack *s_a, s_stack *s_b)
{
	int posa;
	int big;
	int posb;
	
	ft_twornb(s_a, s_b);
	while(s_a->len != 0)
	{
		posa = ft_bestmouve(s_a, s_b);
		posb = ft_position(s_b, s_a->arr[posa]);
		ft_common(s_a, s_b, posa, posb);
		pb(s_a, s_b);
		ft_putstr_fd("pb\n", 1);
	}
	big = ft_biggest(s_b);
	ft_rotateb(s_b, big);
	while(s_b->len != 0)
	{
		pa(s_a, s_b);
		ft_putstr_fd("pa\n", 1);
	}
}