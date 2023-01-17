/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:24:15 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/17 12:04:53 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *ft_getnumbers(char *farg, int *lena)
{
	int i;
	char **split;
	int len;
	int *numbers;
	s_stack *pab;
	
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
	int *s_b;
	int *s_a;
	int lena;
	int lenb;
	char *farg;
	s_stack *pab;
	
	farg = ft_strjarg(av);
	s_a = ft_getnumbers(farg, &lena);
	
}