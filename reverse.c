/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:19:06 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/16 20:26:07 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rra(int *s_a, int len)
{
	int i;
	int tmp;

	i = len - 1;
	tmp = s_a[i];
	while(i > 0)
	{
		s_a[i] = s_a[i - 1];
		i--;
	}
	s_a[i] = tmp;
}

void rrb(int *s_b, int len)
{
	int i;
	int tmp;

	i = len - 1;
	tmp = s_b[i];
	while(i > 0)
	{
		s_b[i] = s_b[i - 1];
		i--;
	}
	s_b[i] = tmp;
}

void rrr(int *s_a, int *s_b, int lena, int lenb)
{
	rra(s_a, lena);
	rrb(s_b, lenb);
}