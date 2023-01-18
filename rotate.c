/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:06:12 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/18 19:30:27 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(s_number *s_a, int len)
{
	int i;
	s_number tmp;
	
	tmp = s_a[0];
	i = 1;
	while(i < len)
	{
		s_a[i - 1] = s_a[i];
		i++;
	}
	s_a[len - 1] = tmp;
	printf("ra\n");
}

void rb(s_number *s_b, int len)
{
	int i;
	s_number tmp;
	
	tmp = s_b[0];
	i = 1;
	while(i < len)
	{
		s_b[i - 1] = s_b[i];
		i++;
	}
	s_b[len - 1] = tmp;
	printf("rb\n");
}

void rr(s_number *s_a, s_number *s_b, int lena, int lenb)
{
	ra(s_a, lena);
	rb(s_b, lenb);
}