/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:24:50 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/17 11:33:03 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int main()
{
	int *s_a;
	int *s_b;
	s_stack *pab;
	int lena = 5;
	int lenb;
	int j;
	int i = 0;
	
	while(i < lena)
	{
		j = i + 1;
		if(s_a[i] < s_a[j])
		{
			pab = pb(s_a, s_b, &lena, &lenb);
			s_a = pab->s_a;
			s_b = pab->s_b;
			i = 0;
			
		}
	}
}