/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:02:58 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/23 22:30:40 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

s_stack *ft_push(s_stack *stack, int number)
{
	int *tmp;
	int i;
	int j;
	
	i = 1;
	j = 0;
	stack->len += 1;
	tmp = malloc(stack->len * sizeof(int));
	tmp[0] = number;
	while(i < stack->len)
	{
		tmp[i] = stack->arr[j];
		i++;
		j++;
	}
	free(stack->arr);
	stack->arr = tmp;
	return (stack);
}

s_stack *ft_pop(s_stack *stack)
{
	int *tmp;
	int i;
	
	i = 0;
	stack->len -= 1;
	tmp = malloc(stack->len * sizeof(int));
	while(i < stack->len)
	{
		tmp[i] = stack->arr[i + 1];
		i++;
	}
	free(stack->arr);
	stack->arr = tmp;
	return (stack);
}

void pa(s_stack *s_a, s_stack *s_b)
{
	if (s_b->len > 0)
	{
		ft_push(s_a, s_b->arr[0]);
		ft_pop(s_b);
	}
}

void pb(s_stack *s_a, s_stack *s_b)
{
	if (s_a->len > 0)
	{
		ft_push(s_b, s_a->arr[0]);
		ft_pop(s_a);
	}
}