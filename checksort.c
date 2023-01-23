/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:46:08 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/23 21:53:49 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_checksort(s_stack *s_a)
{
	int i;
	int number;

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
