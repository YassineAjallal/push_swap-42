/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:25:29 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/30 15:42:51 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include "./libft/libft.h"

typedef struct s_stack
{
	int	*arr;
	int	len;
}	t_stack;

// push_swap.c
void	ft_sorting(t_stack *s_a, t_stack *s_b);

// errors.c
int		ft_integers(char *farg);
int		ft_range(char *farg);
int		ft_skip(char *av);
int		ft_checkdup(int *arr, int len);
int		ft_duplicate(char *farg);

// arrays.c
void	ft_free2d(char **str);
int		ft_calc2d(char **str);
void	ft_freestack(t_stack *stack);

// swap.c
void	sa(t_stack *s_a);
void	sb(t_stack *s_b);
void	ss(t_stack *s_a, t_stack *s_b);

// rotate.c
void	ra(t_stack *s_a);
void	rb(t_stack *s_b);
void	rr(t_stack *s_a, t_stack *s_b);

// reverse.c
void	rra(t_stack *s_a);
void	rrb(t_stack *s_b);
void	rrr(t_stack *s_a, t_stack *s_b);

// push.c
t_stack	*ft_push(t_stack *stack, int number);
t_stack	*ft_pop(t_stack *stack);
void	pa(t_stack *s_a, t_stack *s_b);
void	pb(t_stack *s_a, t_stack *s_b);

// sort.c
void	ft_sort(t_stack *s_a, t_stack *s_b);
void	ft_sort4(t_stack *s_a, t_stack *s_b);
void	ft_sort5(t_stack *s_a, t_stack *s_b);

// sort3.c
void	ft_sort3(t_stack *stack);
void	ft_firstc(t_stack *stack);
void	ft_secondc(t_stack *stack);

// rotateab.c
void	ft_rotatea(t_stack *stack, int pos);
void	ft_rotateb(t_stack *stack, int pos);

// bigsmall.c
int		ft_biggest(t_stack *stack);
int		ft_smallest(t_stack *stack);
void	ft_twornb(t_stack *s_a, t_stack *s_b);

// mouve.c
int		ft_position(t_stack *stack, int number);
int		ft_index(int posa, int posb, int lena, int lenb);
int		ft_bestmouve(t_stack *s_a, t_stack *s_b);

// common.c
void	ft_common(t_stack *s_a, t_stack *s_b, int posa, int posb);
void	ft_less2(t_stack *s_a, t_stack *s_b, int posa, int posb);
void	ft_great2(t_stack *s_a, t_stack *s_b, int posa, int posb);

// checksort.c
int		ft_checksort(t_stack *s_a);
t_stack	*ft_getnumbers(char *farg);
char	*ft_strjarg(char **av);

// stacka.c
void	ft_pusha(t_stack *s_a, t_stack *s_b);
int		ft_positiona(t_stack *stack, int number);

#endif