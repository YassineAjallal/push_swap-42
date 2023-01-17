/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:06:12 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/17 11:18:48 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(int *s_a, int len)
{
	int i;
	int tmp;
	
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

void rb(int *s_b, int len)
{
	int i;
	int tmp;
	
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

void rr(int *s_a, int *s_b, int lena, int lenb)
{
	ra(s_a, lena);
	rb(s_b, lenb);
}