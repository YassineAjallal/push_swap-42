/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:19:06 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/18 19:29:40 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rra(s_number *s_a, int len)
{
	int i;
	s_number tmp;

	i = len - 1;
	tmp = s_a[i];
	while(i > 0)
	{
		s_a[i] = s_a[i - 1];
		i--;
	}
	s_a[i] = tmp;
	printf("rra\n");
}

void rrb(s_number *s_b, int len)
{
	int i;
	s_number tmp;

	i = len - 1;
	tmp = s_b[i];
	while(i > 0)
	{
		s_b[i] = s_b[i - 1];
		i--;
	}
	s_b[i] = tmp;
	printf("rrb\n");
}

void rrr(s_number *s_a, s_number *s_b, int lena, int lenb)
{
	rra(s_a, lena);
	rrb(s_b, lenb);
}