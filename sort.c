/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:31:30 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/30 14:39:38 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort4(t_stack *s_a, t_stack *s_b)
{
	int	small;

	small = ft_smallest(s_a);
	ft_rotatea(s_a, small);
	pb(s_a, s_b);
	ft_putstr_fd("pb\n", 1);
	ft_sort3(s_a);
	pa(s_a, s_b);
	ft_putstr_fd("pa\n", 1);
}

void	ft_sort5(t_stack *s_a, t_stack *s_b)
{
	int	small;

	small = ft_smallest(s_a);
	ft_rotatea(s_a, small);
	pb(s_a, s_b);
	ft_putstr_fd("pb\n", 1);
	ft_sort4(s_a, s_b);
	pa(s_a, s_b);
	ft_putstr_fd("pa\n", 1);
}

void	ft_twornb(t_stack *s_a, t_stack *s_b)
{
	pb(s_a, s_b);
	ft_putstr_fd("pb\n", 1);
	pb(s_a, s_b);
	ft_putstr_fd("pb\n", 1);
}

void	ft_sort(t_stack *s_a, t_stack *s_b)
{
	int	posa;
	int	posb;
	int	small;

	ft_twornb(s_a, s_b);
	while (s_a->len != 3)
	{
		posa = ft_bestmouve(s_a, s_b);
		posb = ft_position(s_b, s_a->arr[posa]);
		small = ft_smallest(s_b);
		if (s_a->arr[posa] < s_b->arr[small])
			ft_common(s_a, s_b, posa, small + 1);
		else
			ft_common(s_a, s_b, posa, posb);
		pb(s_a, s_b);
		ft_putstr_fd("pb\n", 1);
	}
	ft_sort3(s_a);
}
