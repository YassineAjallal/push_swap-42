/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:24:15 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/16 08:56:50 by yajallal         ###   ########.fr       */
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
	numbers = malloc(len * sizeof(s_stack));
	while(i < len)
	{
		numbers[i].index = i;
		numbers[i].value = ft_atoi(split[i]);
		i++;
	}
	ft_free2d(split);
	return (numbers);
}

int main(int ac, char **av, char **envp)
{
	char *farg;
	s_stack *ret;
	int i;

	farg = ft_strjarg(av);
	if (!farg || !ft_duplicate(farg))
		printf("ERROR \n");
	else
		printf("NICE\n");

	i = 0;
	ret = ft_getnumbers(farg);
	while(i < 5)
	{
		printf("Index : %d \n", ret[i].index);
		printf("Value : %d \n", ret[i].value);
		printf("----------------------------\n");
		i++;
	}
}