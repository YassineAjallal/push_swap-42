/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:14:46 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/24 11:15:43 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_common(t_stack *s_a, t_stack *s_b, int posa, int posb)
{
	if (posa == 0 && posb != 0)
		ft_rotateb(s_b, posb);
	else if (posb == 0 && posa != 0)
		ft_rotatea(s_a, posa);
	else if (posa <= s_a->len / 2 && posb <= s_b->len / 2)
		ft_less2(s_a, s_b, posa, posb);
	else if (posa > s_a->len / 2 && posb > s_b->len / 2)
		ft_great2(s_a, s_b, posa, posb);
	else
	{
		ft_rotatea(s_a, posa);
		ft_rotateb(s_b, posb);
	}
}

void	ft_less2(t_stack *s_a, t_stack *s_b, int posa, int posb)
{
	int	i;

	if (posa <= posb)
	{
		i = 0;
		while (i < posa)
		{
			rr(s_a, s_b);
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
			i++;
		}
		ft_rotatea(s_a, posa - i);
	}
}

void	ft_great2(t_stack *s_a, t_stack *s_b, int posa, int posb)
{
	int	i;

	if (s_a->len - posa <= s_b->len - posb)
	{
		i = 0;
		while (i < s_a->len - posa)
		{
			rrr(s_a, s_b);
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
			i++;
		}
		ft_rotatea(s_a, posa + i);
	}
}
