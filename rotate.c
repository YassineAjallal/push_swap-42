/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:06:12 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/23 22:07:41 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(s_stack *s_a)
{
	int i;
	int tmp;
	
	tmp = s_a->arr[0];
	i = 1;
	while(i < s_a->len)
	{
		s_a->arr[i - 1] = s_a->arr[i];
		i++;
	}
	s_a->arr[s_a->len - 1] = tmp;
}

void rb(s_stack *s_b)
{
	int i;
	int tmp;
	
	tmp = s_b->arr[0];
	i = 1;
	while(i < s_b->len)
	{
		s_b->arr[i - 1] = s_b->arr[i];
		i++;
	}
	s_b->arr[s_b->len - 1] = tmp;
}

void rr(s_stack *s_a, s_stack *s_b)
{
	ra(s_a);
	rb(s_b);
	ft_putstr_fd("rr\n", 1);
}