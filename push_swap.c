/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:24:15 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/22 22:24:00 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

s_stack *ft_getnumbers(char *farg)
{
	int i;
	char **split;
	int len;
	s_stack *numbers;
	
	i = 0;
	split = ft_split(farg, ' ');
	len = ft_calc2d(split);
	numbers = malloc(sizeof(s_stack));
	numbers->arr = malloc(len * sizeof(int));
	numbers->len = len;
	while(i < len)
	{
		numbers->arr[i] = ft_atoi(split[i]);
		i++;
	}
	ft_free2d(split);
	return (numbers);
}

int main(int ac, char **av)
{
	s_stack *s_a;
	s_stack *s_b;
	s_stacks *pab;
	ac++;
	char *farg;
	// int i;
	
	s_b = malloc(sizeof(s_stack));
	s_b->arr = NULL;
	s_b->len = 0;
	farg = ft_strjarg(av);
	s_a = ft_getnumbers(farg);
	pab = ft_sort5(s_a, s_b);
	// printf("-----------Stack-a---------\n");
	// i = 0;
	// while(i < s_a->len)
	// {
	// 	printf("%d\n", pab->s_a->arr[i]);
	// 	i++;
	// }
	// printf("----------Stack-b----------\n");
	// i = 0;
	// while(i < s_b->len)
	// {
	// 	printf("%d\n", pab->s_b->arr[i]);
	// 	i++;
	// }

	// i = 0;
	// printf("-------------a-----------------\n");
	// while(i < s_a->len)
	// {
	// 	printf("%d\n", s_a->arr[i]);
	// 	i++;
	// }
	// i = 0;
	// printf("-------------b-----------------\n");
	// while(i < s_b->len)
	// {
	// 	printf("%d\n", s_b->arr[i]);
	// 	i++;
	// }
	// printf("-------------------------------\n");
	// ft_common(s_a, s_b, 5, 5);
	// i = 0;
	// printf("-------------a-----------------\n");
	// while(i < s_a->len)
	// {
	// 	printf("%d\n", s_a->arr[i]);
	// 	i++;
	// }
	// printf("-------------b-----------------\n");
	// i = 0;
	// while(i < s_b->len)
	// {
	// 	printf("%d\n", s_b->arr[i]);
	// 	i++;
	// }
}