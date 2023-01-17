/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:24:15 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/17 15:16:52 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *ft_getnumbers(char *farg, int *lena)
{
	int i;
	char **split;
	int len;
	int *numbers;
	
	i = 0;
	split = ft_split(farg, ' ');
	len = ft_calc2d(split);
	numbers = malloc(len * sizeof(int));
	*lena = len;
	while(i < len)
	{
		numbers[i] = ft_atoi(split[i]);
		i++;
	}
	ft_free2d(split);
	return (numbers);
}

int main(int ac, char **av)
{
	int *s_a;
	int *s_b = NULL;
	int lenb;
	int lena;
	s_stack *pab;
	ac++;
	char *farg;
	int i = 0;
	
	farg = ft_strjarg(av);
	s_a = ft_getnumbers(farg, &lena);
	pab = ft_sort5(s_a, s_b, &lena, &lenb);
	while(i < 2)
	{
		printf("%d\n", pab->s_a[i]);
		i++;
	}
	printf("--------------------\n");
	i = 0;
	while(i < 3)
	{
		printf("%d\n", pab->s_b[i]);
		i++;
	}
	
}