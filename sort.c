/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:31:30 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/22 22:12:19 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// void ft_sort3(int *stack)
// {
// 	int i;
// 	i = 0;
// 	if ((stack[0] > stack[1]) && stack[0] > stack[2])
// 	{
// 		if(stack[1] > stack[2])
// 		{
// 			ra(stack, 3);
// 			sa(stack);
// 		}
// 		else 
// 			ra(stack, 3);
// 	}
// 	else
// 	{
// 		if(stack[0] > stack[1])
// 			sa(stack);
// 		else if(stack[0] > stack[2])
// 			rra(stack, 3);
// 		else if (stack[1] > stack[2]){
// 			rra(stack, 3);
// 			sa(stack);
// 		}
// 	}
// }

void ft_rotatea(s_stack *stack, int pos)
{
	int i;
	
	if (pos <= stack->len / 2)
	{
		i = 0;
		while(i < pos)
		{
			ra(stack);
			ft_putstr_fd("ra\n", 1);
			i++;
		}
	}
	else if (pos > stack->len / 2)
	{
		i = 0;
		while(i < stack->len - pos)
		{
			rra(stack);
			ft_putstr_fd("rra\n", 1);
			i++;
		}
	}
}
void ft_rotateb(s_stack *stack, int pos)
{
	int i;
	
	if (pos <= stack->len / 2)
	{
		i = 0;
		while(i < pos)
		{
			rb(stack);
			ft_putstr_fd("rb\n", 1);
			i++;
		}
	}
	else if (pos > stack->len / 2)
	{
		i = 0;
		while(i < stack->len - pos)
		{
			rrb(stack);
			ft_putstr_fd("rrb\n", 1);
			i++;
		}
	}
}
// s_stack *ft_sort4(int *s_a, int *s_b, int *lena, int *lenb)
// {
// 	int i;
// 	s_stack *pab;
// 	int small;
// 	small = ft_smallest(s_a, *lena);
// 	i = 0;
// 	while(i < small)
// 	{
// 		ra(s_a, *lena);
// 		i++;
// 	}
// 	pab = pb(s_a, s_b, lena, lenb);
// 	s_a = pab->s_a;
// 	s_b = pab->s_b;
// 	ft_sort3(s_a);
// 	pab = pa(s_a, s_b, lena, lenb);
// 	return (pab);
// }

s_stacks *ft_twornb(s_stack *s_a, s_stack *s_b)
{
	int small;
	int big;
	s_stacks *pab;
	
	small = ft_smallest(s_a);
	ft_rotatea(s_a, small);
	pab = pb(s_a, s_b);
	s_a = pab->s_a;
	s_b = pab->s_b;
	
	big = ft_biggest(s_a);
	ft_rotatea(s_a, big);
	pab = pb(s_a, s_b);
	s_a = pab->s_a;
	s_b = pab->s_b;
	
	return (pab);
}
s_stacks *ft_sort5(s_stack *s_a, s_stack *s_b)
{
	s_stacks *pab;
	int posa;
	int big;
	int posb;
	
	pab = ft_twornb(s_a, s_b);
	s_a = pab->s_a;
	s_b = pab->s_b;
	while(s_a->len != 0)
	{
		posa = ft_bestmouve(s_a, s_b);
		posb = ft_position(s_b, s_a->arr[posa]);
		ft_common(s_a, s_b, posa, posb);
		pab = pb(s_a, s_b);
		s_a = pab->s_a;
		s_b = pab->s_b;
	}
	big = ft_biggest(s_b);
	ft_rotateb(s_b, big);
	while(s_b->len != 0)
	{
		pab = pa(s_a, s_b);
		s_a = pab->s_a;
		s_b = pab->s_b;
	}
	return (pab);
}