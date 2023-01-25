/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:02:58 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/24 11:16:28 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_push(t_stack *stack, int number)
{
	int	*tmp;
	int	i;
	int	j;

	i = 1;
	j = 0;
	stack->len += 1;
	tmp = malloc(stack->len * sizeof(int));
	tmp[0] = number;
	while (i < stack->len)
	{
		tmp[i] = stack->arr[j];
		i++;
		j++;
	}
	free(stack->arr);
	stack->arr = tmp;
	return (stack);
}

t_stack	*ft_pop(t_stack *stack)
{
	int	*tmp;
	int	i;

	i = 0;
	stack->len -= 1;
	tmp = malloc(stack->len * sizeof(int));
	while (i < stack->len)
	{
		tmp[i] = stack->arr[i + 1];
		i++;
	}
	free(stack->arr);
	stack->arr = tmp;
	return (stack);
}

void	pa(t_stack *s_a, t_stack *s_b)
{
	if (s_b->len > 0)
	{
		s_a = ft_push(s_a, s_b->arr[0]);
		s_b = ft_pop(s_b);
	}
}

void	pb(t_stack *s_a, t_stack *s_b)
{
	if (s_a->len > 0)
	{
		s_b = ft_push(s_b, s_a->arr[0]);
		s_a = ft_pop(s_a);
	}
}
