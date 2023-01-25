/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:46:08 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/24 11:15:25 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjarg(char **av)
{
	int		i;
	char	*farg;
	char	*addspace;
	char	*tmp;

	i = 1;
	farg = malloc(1);
	farg[0] = '\0';
	while (av[i] && av)
	{
		if (ft_strlen(av[i]) == 0 || !ft_skip(av[i]))
			return (0);
		addspace = ft_strjoin(" ", av[i]);
		tmp = ft_strjoin(farg, addspace);
		free(addspace);
		free(farg);
		farg = tmp;
		i++;
	}
	return (farg);
}

t_stack	*ft_getnumbers(char *farg)
{
	int		i;
	char	**split;
	int		len;
	t_stack	*numbers;

	i = 0;
	split = ft_split(farg, ' ');
	len = ft_calc2d(split);
	numbers = malloc(sizeof(t_stack));
	numbers->arr = malloc(len * sizeof(int));
	numbers->len = len;
	while (i < len)
	{
		numbers->arr[i] = ft_atoi(split[i]);
		i++;
	}
	ft_free2d(split);
	return (numbers);
}

int	ft_checksort(t_stack *s_a)
{
	int	i;
	int	number;

	i = 1;
	number = s_a->arr[0];
	while (i < s_a->len)
	{
		if (s_a->arr[i] > number)
			number = s_a->arr[i];
		else
			return (1);
		i++;
	}
	return (0);
}
