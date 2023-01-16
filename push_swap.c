/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:24:15 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/16 20:33:23 by yajallal         ###   ########.fr       */
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

int main(int ac, char **av, char **envp)
{
	char *farg;
	int *s_a;
	int len;
	
	int s_b[6] = {4, 5, 6, 7, 8, 9};
	int i;

	farg = ft_strjarg(av);
	if (!farg || !ft_duplicate(farg))
		printf("ERROR \n");

	i = 0;
	s_a = ft_getnumbers(farg, &len);
	while(i < len)
	{
		printf("---- %d ------\n", s_a[i]);
		i++;
	}
	printf("---------------------\n");
	printf("LEN : %d\n", len);
	i = 0;
	rr(s_a, s_b, len, 6);
	rrr(s_a, s_b, len, 6);
	while(i < len)
	{
		printf("s_a : ---- %d ------\n", s_a[i]);
		i++;
	}
	printf("---------------------\n");
	i = 0;
	while(i < 6)
	{
		printf("s_b : ---- %d ------\n", s_b[i]);
		i++;
	}
}