/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:25:29 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/17 14:54:21 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "./libft/libft.h"

typedef struct t_stack
{
	int *s_a;
	int *s_b;
} s_stack;

// errors.c
int		ft_integers(char *farg);
int		ft_range (char *farg);
char	*ft_strjarg(char **av);

// arrays.c
void	ft_free2d(char **str);
int 	ft_calc2d(char **str);
int		ft_duplicate(char *farg);

// swap.c
void	sa(int *s_a);
void	sb(int *s_b);
void	ss(int *s_a, int *s_b);

// rotate.c
void ra(int *s_a, int len);
void rb(int *s_b, int len);
void rr(int *s_a, int *s_b, int lena, int lenb);

// reverse.c
void rra(int *s_a, int len);
void rrb(int *s_b, int len);
void rrr(int *s_a, int *s_b, int lena, int lenb);

// push.c
int 	*ft_push(int *stack, int *len, int number);
int 	*ft_pop(int *stack, int *len);
s_stack	*pa(int *s_a, int *s_b, int *lena, int *lenb);
s_stack	*pb(int *s_a, int *s_b, int *lena, int *lenb);

// sort.c
void ft_sort3(int *stack);
s_stack *ft_sort5(int *s_a, int *s_b, int *lena, int *lenb);
#endif