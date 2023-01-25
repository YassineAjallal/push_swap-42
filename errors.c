/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:32:29 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/24 10:56:08 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_skip(char *av)
{
	int	i;

	i = 0;
	while (av[i] == ' ')
		i++;
	if (!av[i])
		return (0);
	return (1);
}

int	ft_integers(char *farg)
{
	int	i;

	i = 0;
	if (!farg)
		return (0);
	if ((farg[i] == '-' || farg[i] == '+'))
		i++;
	while (farg[i])
	{
		if (farg[i] == '-' || farg[i] == '+')
		{
			if (!ft_isdigit(farg[i + 1]) || farg[i - 1] != ' ')
				return (0);
			else
				i++;
		}
		if (!ft_isdigit(farg[i]) && farg[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	ft_range(char *farg)
{
	char	**split;
	int		i;
	long	toint;

	i = 0;
	if (!ft_integers(farg))
		return (0);
	split = ft_split(farg, ' ');
	while (split[i])
	{
		toint = ft_atoi(split[i]);
		if (toint > INT_MAX || toint < INT_MIN)
		{
			ft_free2d(split);
			return (0);
		}
		i++;
	}
	ft_free2d(split);
	return (1);
}

int	ft_checkdup(int *arr, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (arr[i] == arr[j])
			{
				free(arr);
				return (0);
			}
			j++;
		}
		i++;
	}
	free(arr);
	return (1);
}

int	ft_duplicate(char *farg)
{
	char	**split;
	int		len;
	int		*arr;
	int		i;
	int		res;

	i = 0;
	if (!ft_range(farg))
		return (0);
	split = ft_split(farg, ' ');
	len = ft_calc2d(split);
	arr = malloc(len * sizeof(int));
	while (i < len)
	{
		arr[i] = ft_atoi(split[i]);
		i++;
	}
	ft_free2d(split);
	res = ft_checkdup(arr, len);
	return (res);
}
