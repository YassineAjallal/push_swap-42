/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:02:58 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/16 20:18:40 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_push(int *stack, int *len, int number)
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
	// stack = tmp;
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

// int *pa(int *s_a, int *s_b, int *lena, int *lenb)
// {
// 	if (*lenb > 0)
// 	{
// 		s_a = ft_push(s_a, lena, s_b[0]);
// 		s_b = ft_pop(s_b, lenb);
// 	}
// }
// int main()
// {
// 	int *s_a;
// 	int len = 3;
// 	int i = 0;

// 	s_a = malloc(3 * sizeof(int));
// 	s_a[0] = 1;
// 	s_a[1] = 2;
// 	s_a[2] = 3;
// 	ft_push(s_a, &len, 0);
// 	while(i < len)
// 	{
// 		printf("%d\n", s_a[i]);
// 		i++;
// 	}
// }