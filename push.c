/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:02:58 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/16 12:42:35 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *ft_push(int *stack, int *len, int number)
{
	int *tmp;
	int i;
	int j;
	
	i = 1;
	j = 0;
	*len += 1;
	tmp = malloc((*len) * sizeof(int));
	tmp[0] = number;
	while(i < *len)
	{
		tmp[i] = stack[j];
		i++;
		j++;
	}
	free(stack);
	return (tmp);
}

int *ft_pop(int *stack, int *len)
{
	int *tmp;
	int i;
	
	i = 0;
	*len -= 1;
	tmp = malloc((*len) * sizeof(int));
	while(i < *len)
	{
		tmp[i] = stack[i + 1];
		i++;
	}
	free(stack);
	return (tmp);
}
void pa(int *s_a, int *s_b, int *lena, int *lenb)
{
	int **pa;
	if (*lenb > 0)
	{
		s_a = ft_push(s_a, lena, s_b[0]);
		s_b = ft_pop(s_b, lenb);
	}
}
