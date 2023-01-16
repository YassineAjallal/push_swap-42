/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:24:15 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/16 22:22:37 by yajallal         ###   ########.fr       */
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
	int lena;
	s_stack *pab;
	int lenb = 0;
	
	int *s_b;
	int i;

	farg = ft_strjarg(av);
	if (!farg || !ft_duplicate(farg))
		printf("ERROR \n");

	s_a = ft_getnumbers(farg, &lena);
	i = 0;
	while(i < lena)
	{
		printf("---- %d ------\n", s_a[i]);
		i++;
	}
	printf("---------------------\n");
	printf("1 lena : %d lenb : %d\n", lena, lenb);
	pab = pb(s_a, s_b, &lena, &lenb);
	s_a =  pab->s_a;
	s_b =  pab->s_b;
	printf("1 lena : %d lenb : %d\n", lena, lenb);
	pab = pb(s_a, s_b, &lena, &lenb);
	s_a =  pab->s_a;
	s_b =  pab->s_b;
	printf("1 lena : %d lenb : %d\n", lena, lenb);
	pab = pb(s_a, s_b, &lena, &lenb);
	s_a =  pab->s_a;
	s_b =  pab->s_b;
	printf("1 lena : %d lenb : %d\n", lena, lenb);
	pab = pb(s_a, s_b, &lena, &lenb);
	s_a =  pab->s_a;
	s_b =  pab->s_b;
	printf("1 lena : %d lenb : %d\n", lena, lenb);
	pab = pb(s_a, s_b, &lena, &lenb);
	s_a =  pab->s_a;
	s_b =  pab->s_b;
	printf("1 lena : %d lenb : %d\n", lena, lenb);
	
	i = 0;
	while(i < lena)
	{
		printf("---- %d ------\n", s_a[i]);
		i++;
	}
	printf("---------------------\n");
	i = 0;
	while(i < lenb)
	{
		printf("---- %d ------\n", s_b[i]);
		i++;
	}
}