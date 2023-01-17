/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:31:30 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/17 12:57:42 by yajallal         ###   ########.fr       */
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
		else {
			rra(stack, 3);
			sa(stack);
		}
	}
	
}