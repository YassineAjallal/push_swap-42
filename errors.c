/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:32:29 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/15 15:05:35 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char *ft_strjarg(char **av)
{
	int i;
	char *farg;
	char *addspace;
	char *tmp;
	
	i = 1;
	farg = malloc(1);
	farg[0] = '\0';
	while(av[i] && av)
	{
		if(ft_strlen(av[i]) == 0)
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

int ft_integers(char *farg)
{
	int i;
	
	i = 0;
	if(!farg)
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
		if(!ft_isdigit(farg[i]) && farg[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int ft_range(char *farg)
{
	char **split;
	int i;
	long toint;
	
	i = 0;
	if(!ft_integers(farg))
		return (0);
	split = ft_split(farg, ' ');
	while(split[i])
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

int ft_checkdup(int *arr, int len)
{
	int i;
	int j;
	
	i = 0;
	while(i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (arr[i] == arr[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
int ft_duplicate(char *farg)
{
	char **split;
	int len;
	int *arr;
	int i;
	
	i = 0;
	if (!ft_range(farg))
		return (0);
	split = ft_split(farg, ' ');
	len = ft_calc2d(split);
	arr = (int *)malloc(len);
	while(i < len)
	{
		arr[i] = ft_atoi(split[i]);
		i++;
	}
	return(ft_checkdup(arr, len));
}
