/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:02:58 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/17 14:55:38 by yajallal         ###   ########.fr       */
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
	//free(stack);
	stack = tmp;
	return (stack);
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
	stack = tmp;
	return (stack);
}

s_stack *pa(int *s_a, int *s_b, int *lena, int *lenb)
{
	s_stack *pab;
	pab = malloc(sizeof(s_stack));
	if (*lenb <= 0)
		return (NULL);
	else
	{
		pab->s_a = ft_push(s_a, lena, s_b[0]);
		pab->s_b = ft_pop(s_b, lenb);
		return (pab);
	}
}

s_stack *pb(int *s_a, int *s_b, int *lena, int *lenb)
{
	s_stack *pab;
	pab = malloc(sizeof(s_stack));
	if (*lena <= 0)
		return (NULL);
	else
	{
		pab->s_b = ft_push(s_b, lenb, s_a[0]);
		pab->s_a = ft_pop(s_a, lena);
		return (pab);
	}
}
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