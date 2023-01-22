/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:14:46 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/22 21:52:55 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_common(s_stack *s_a, s_stack *s_b, int posa, int posb)
{
	int i;
	
	if (posa == 0 && posb != 0)
		ft_rotateb(s_b, posb);
	else if (posb == 0 && posa != 0)
		ft_rotatea(s_a, posa);
	else if (posa <= s_a->len / 2 && posb <= s_b->len / 2)
	{
		if (posa <= posb)
		{
			i = 0;
			while (i < posa)
			{
				rr(s_a, s_b);
				ft_putstr_fd("rr\n", 1);
				i++;
			}
			ft_rotateb(s_b, posb - i);
		}
		else 
		{
			i = 0;
			while (i < posb)
			{
				rr(s_a, s_b);
				ft_putstr_fd("rr\n", 1);
				i++;
			}
			ft_rotatea(s_a, posa - i);
		}
	}
	else if (posa > s_a->len / 2 && posb > s_b->len / 2)
	{
		if (s_a->len - posa <= s_b->len - posb)
		{
			i = 0;
			while (i < s_a->len - posa)
			{
				rrr(s_a, s_b);
				ft_putstr_fd("rrr\n", 1);
				i++;
			}
			ft_rotateb(s_b, posb + i);
		}
		else
		{
			i = 0;
			while (i < s_b->len - posb)
			{
				rrr(s_a, s_b);
				ft_putstr_fd("rrr\n", 1);
				i++;
			}
			ft_rotatea(s_a, posa + i);
		}
	}
	else 
	{
		ft_rotatea(s_a, posa);
		ft_rotateb(s_b, posb);	
	}
}