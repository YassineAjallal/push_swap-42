/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:20:04 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/21 21:48:53 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(s_stack *s_a)
{
	int	tmp;

	tmp = s_a->arr[0];
	s_a->arr[0] = s_a->arr[1];
	s_a->arr[1] = tmp;
	printf("sa\n");
}

void	sb(s_stack *s_b)
{
	int	tmp;

	tmp = s_b->arr[0];
	s_b->arr[0] = s_b->arr[1];
	s_b->arr[1] = tmp;
	printf("sa\n");
}

void	ss(s_stack *s_a, s_stack *s_b)
{
	sa(s_a);
	sb(s_b);
}