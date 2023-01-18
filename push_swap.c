/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:24:15 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/18 19:28:16 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// s_number *ft_getnumbers(char *farg, int *lena)
// {
// 	int i;
// 	char **split;
// 	int len;
// 	s_number *numbers;
	
// 	i = 0;
// 	split = ft_split(farg, ' ');
// 	len = ft_calc2d(split);
// 	numbers = malloc(len * sizeof(s_number));
// 	*lena = len;
// 	while(i < len)
// 	{
// 		numbers[i].value = ft_atoi(split[i]);
// 		numbers[i].index = i;
// 		i++;
// 	}
// 	ft_free2d(split);
// 	return (numbers);
// }

int main(int ac, char **av)
{
	s_number *s_a;
	// //int *s_b = NULL;
	// //int lenb;
	// int lena;
	// //s_stack *pab;
	// char *farg;
	// int i;
	// ac++;
	// i = 0;
	s_a = malloc(2 * sizeof(s_number));
	// farg = ft_strjarg(av);
	// if(!farg || !ft_duplicate(farg))
	// 	printf("ERROR");
	// else
	// 	printf("KEEP");
	
	// s_a = ft_getnumbers(farg, &lena);
	// // ft_sort3(s_a);
	// printf("--------------------\n");
	// while(i < lena)
	// {
	// 	printf("index : %d\n", s_a[i].index);
	// 	printf("value : %d\n", s_a[i].value);
	// printf("--------------------\n");
	// 	i++;
	// }
	// i = 0;
	// while(i < 3)
	// {
	// 	printf("%d\n", pab->s_b[i]);
	// 	i++;
	// }
	s_a[0].index = 1;
	s_a[0].value = 15;
	
	s_a[1] = s_a[0];
		printf("index : %d\n", s_a[0].index);
		printf("value : %d\n", s_a[0].value);
		printf("index : %d\n", s_a[1].index);
		printf("value : %d\n", s_a[1].value);
}