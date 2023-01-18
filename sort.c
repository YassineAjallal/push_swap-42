/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:31:30 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/18 18:48:05 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_biggest(int *stack, int len)
{
	int i;
	int tmpn;
	int tmpi;
	
	i = 0;
	tmpn = stack[0];
	tmpi = 0;
	
	while(i < len)
	{
		if(stack[i] > tmpn)
		{
			tmpn = stack[i];
			tmpi = i;
		}
		i++;
	}
	return (tmpi);
}
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

// s_stack *ft_sort5(int *s_a, int *s_b, int *lena, int *lenb)
// {
// 	s_stack *pab;
// 	s_stack *fpab;
// 	int i;
// 	int index;

// 	fpab = malloc(sizeof(s_stack));
// 	while(*lena != 2)
// 	{
// 			i = 0;
// 			index = ft_biggest(s_a, *lena);
// 			if (index > *lena / 2)
// 			{
// 				while (i < index - (*lena / 2))
// 				{
// 					rra(s_a, *lena);
// 					i++;
// 				}
// 			}
// 			else
// 			{
// 				while(i < index)
// 				{
// 					ra(s_a, *lena);
// 					i++;
// 				}	
// 			}
					
// 			pab = pb(s_a, s_b, lena, lenb);
// 			s_a = pab->s_a;
// 			s_b = pab->s_b;		
// 	}
// 	ft_sort3(s_b);
// 	if(s_a[0] < s_a[1])
// 		sa(s_a);
// 	while (*lenb != 0)
// 	{
// 		pab = pa(s_a, s_b, lena, lenb);
// 		s_a = pab->s_a;
// 		s_b = pab->s_b;	
// 	}
// 	// fpab->s_a = s_a;
// 	// fpab->s_b = s_b;
// 	return (pab);
// }