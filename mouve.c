/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:32:55 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/22 15:24:55 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_position(s_stack *stack, int number)
{
	int small;
	int bigindex;
	int i;
	int smallvalue;
	
	small = ft_smallest(stack);
	smallvalue = stack->arr[small];
	bigindex = small;
	i = 0;
	while(i < stack->len)
	{
		if(stack->arr[i] > smallvalue)
		{
			if (number > stack->arr[i])
			{
				smallvalue = stack->arr[i];
				bigindex = i;
			}
		}
		i++;
	}
	return (bigindex);
}

int ft_index(int posa, int posb, int lena, int lenb)
{
	if (posa > lena / 2)
	{
		posa = lena - posa;
	}
	if (posb > lenb / 2)
	{
		posb = lenb - posb;
	}
	return (posb + posa);
}
int ft_bestmouve(s_stack *s_a, s_stack *s_b)
{
	int i;

	int bestmouve;
	int pos;
	int tmp;
	int index = 0;
	pos = ft_position(s_b, s_a->arr[0]);
	bestmouve = ft_index(0, pos, s_a->len, s_b->len);
	i = 1;
	while(i < s_a->len)
	{
		pos = ft_position(s_b, s_a->arr[i]);
		tmp = ft_index(i, pos, s_a->len, s_b->len);
		if (tmp < bestmouve)
		{
			bestmouve = tmp;
			index = i;
		}
		i++;
	}
	return (index);
}
