/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:31:30 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/17 15:25:57 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort3(int *stack)
{
	int i;
	i = 0;
	if ((stack[0] > stack[1]) && stack[0] > stack[2])
	{
		if(stack[1] > stack[2])
		{
			ra(stack, 3);
			sa(stack);
		}
		else 
			ra(stack, 3);
	}
	else
	{
		if(stack[0] > stack[1])
			sa(stack);
		else if(stack[0] > stack[2])
			rra(stack, 3);
		else if (stack[1] > stack[2]){
			rra(stack, 3);
			sa(stack);
		}
	}
}

s_stack *ft_sort5(int *s_a, int *s_b, int *lena, int *lenb)
{
	s_stack *pab;
	s_stack *fpab;

	fpab = malloc(sizeof(s_stack));
	//int j = 1;
	while(*lena != 2)
	{
			pab = pb(s_a, s_b, lena, lenb);
			s_a = pab->s_a;
			s_b = pab->s_b;
			//sa(s_a);
	}
	ft_sort3(s_b);
	fpab->s_a = s_a;
	fpab->s_b = s_b;
	return (fpab);
}