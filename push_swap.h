/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:25:29 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/18 19:39:05 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "./libft/libft.h"

typedef struct t_number
{
	int value;
	int index;
} s_number;

typedef struct t_stack
{
	s_number *s_a;
	s_number *s_b;
} s_stack;

// errors.c
int		ft_integers(char *farg);
int		ft_range(char *farg);
char	*ft_strjarg(char **av);

// arrays.c
void	ft_free2d(char **str);
int 	ft_calc2d(char **str);
int		ft_duplicate(char *farg);

// swap.c
void	sa(s_number *s_a);
void	sb(s_number *s_b);
void	ss(s_number *s_a, s_number *s_b);

// rotate.c
void ra(s_number *s_a, int len);
void rb(s_number *s_b, int len);
void rr(s_number *s_a, s_number *s_b, int lena, int lenb);

// reverse.c
void rra(s_number *s_a, int len);
void rrb(s_number *s_b, int len);
void rrr(s_number *s_a, s_number *s_b, int lena, int lenb);

// push.c
s_stack	*ft_push(s_number *stack, int *len, s_number number);
s_stack	*ft_pop(s_number *stack, int *len);
s_stack	*pa(s_number *s_a, s_number *s_b, int *lena, int *lenb);
s_stack	*pb(s_number *s_a, s_number *s_b, int *lena, int *lenb);

// sort.c
void ft_sort3(s_number *stack);
s_stack *ft_sort5(s_number *s_a, s_number *s_b, int *lena, int *lenb);
int ft_biggest(s_number *stack, int len);
#endif