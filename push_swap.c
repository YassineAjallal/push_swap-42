/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:24:15 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/23 22:56:06 by yajallal         ###   ########.fr       */
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
	char *farg;
	
	if (ac > 1)
	{
		s_b = malloc(sizeof(s_stack));
		s_b->arr = NULL;
		s_b->len = 0;
		farg = ft_strjarg(av);
		if (!ft_duplicate(farg))
		{
			ft_putstr_fd("Error\n", 2);
			exit(EXIT_FAILURE);
		}
		s_a = ft_getnumbers(farg);
		if (ft_checksort(s_a))
		{
			if (s_a->len == 3)
				ft_sort3(s_a);
			else if (s_a->len == 4)
				ft_sort4(s_a, s_b);
			else if (s_a->len == 5)
				ft_sort5(s_a, s_b);
			else
				ft_sort(s_a, s_b);
		}
	}
}