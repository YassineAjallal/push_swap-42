/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:24:15 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/15 15:15:07 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av, char **envp)
{
	char *farg;
	int ret;

	farg = ft_strjarg(av);
	if (!farg || !ft_integers(farg) || !ft_range(farg) || !ft_duplicate(farg))
		printf("ERROR \n");
	else
		printf("NICE\n");
	while(1){};
}