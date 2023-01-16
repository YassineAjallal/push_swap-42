/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:02:58 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/16 09:20:07 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int *s_a)
{
	int	tmp;

	tmp = s_a[0];
	s_a[0] = s_a[1];
	s_a[1] = tmp;
}

void	sb(int *s_b)
{
	int	tmp;

	tmp = s_b[0];
	s_b[0] = s_b[1];
	s_b[1] = tmp;
}

void	ss(int *s_a, int *s_b)
{
	sa(s_a);
	sb(s_b);
}