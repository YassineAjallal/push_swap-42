/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:20:04 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/18 19:33:11 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(s_number *s_a)
{
	s_number	tmp;

	tmp = s_a[0];
	s_a[0] = s_a[1];
	s_a[1] = tmp;
	printf("sa\n");
}

void	sb(s_number *s_b)
{
	s_number	tmp;

	tmp = s_b[0];
	s_b[0] = s_b[1];
	s_b[1] = tmp;
	printf("sb\n");
}

void	ss(s_number *s_a, s_number *s_b)
{
	sa(s_a);
	sb(s_b);
}