/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:20:04 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/24 11:17:30 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *s_a)
{
	int	tmp;

	tmp = s_a->arr[0];
	s_a->arr[0] = s_a->arr[1];
	s_a->arr[1] = tmp;
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack *s_b)
{
	int	tmp;

	tmp = s_b->arr[0];
	s_b->arr[0] = s_b->arr[1];
	s_b->arr[1] = tmp;
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack *s_a, t_stack *s_b)
{
	sa(s_a);
	sb(s_b);
}
