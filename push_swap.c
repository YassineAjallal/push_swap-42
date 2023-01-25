/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:24:15 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/25 14:51:50 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sorting(t_stack *s_a, t_stack *s_b)
{
	if (s_a->len == 2)
		sa(s_a);
	else if (s_a->len == 3)
		ft_sort3(s_a);
	else if (s_a->len == 4)
		ft_sort4(s_a, s_b);
	else if (s_a->len == 5)
		ft_sort5(s_a, s_b);
	else
		ft_sort(s_a, s_b);
}

int	main(int ac, char **av)
{
	t_stack	*s_a;
	t_stack	*s_b;
	char	*farg;

	if (ac > 1)
	{
		s_b = malloc(sizeof(t_stack));
		s_b->arr = NULL;
		s_b->len = 0;
		farg = ft_strjarg(av);
		if (!ft_duplicate(farg))
		{
			ft_putstr_fd("Error\n", 2);
			exit(EXIT_FAILURE);
		}
		s_a = ft_getnumbers(farg);
		if (ft_checksort(s_a))
			ft_sorting(s_a, s_b);
	}
}
