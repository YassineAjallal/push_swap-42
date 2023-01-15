/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:24:15 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/15 14:06:54 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int main(int ac, char **av, char **envp)
{
	char *str;
	int ret;

	str = ft_strjarg(av);
	printf("||%s ||\n", str);
	ret = ft_integers(str);
	printf("|---- %d ----|", ret);
}