/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:24:15 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/15 20:07:41 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *ft_getnumbers(char *farg)
{
	int i;
	char **split;
	int len;
	int *numbers;
	
	i = 0;
	split = ft_split(farg, ' ');
	len = ft_calc2d(split);
	numbers = malloc(len * sizeof(int));
	while(i < len)
	{
		numbers[i] = ft_atoi(split[len - i - 1]);
		i++;
	}
	return (numbers);
}

int main(int ac, char **av, char **envp)
{
	char *farg;
	int *ret;
	int i;

	farg = ft_strjarg(av);
	if (!farg || !ft_duplicate(farg))
		printf("ERROR \n");
	else
		printf("NICE\n");

	i = 0;
	ret = ft_getnumbers(farg);
	while(i < 8)
	{
		printf("---- %d ------\n", ret[i]);
		i++;
	}
}