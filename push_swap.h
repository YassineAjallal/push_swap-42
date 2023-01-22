/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:25:29 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/22 19:41:02 by yajallal         ###   ########.fr       */
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
	int *arr;
	int len;
} s_stack;

typedef struct t_stacks
{
	s_stack *s_a;
	s_stack *s_b;
} s_stacks;

// errors.c
int		ft_integers(char *farg);
int		ft_range (char *farg);
char	*ft_strjarg(char **av);

// arrays.c
void	ft_free2d(char **str);
int 	ft_calc2d(char **str);
int		ft_duplicate(char *farg);

// swap.c
void	sa(s_stack *s_a);
void	sb(s_stack *s_b);
void	ss(s_stack *s_a, s_stack *s_b);

// rotate.c
void ra(s_stack *s_a);
void rb(s_stack *s_b);
void rr(s_stack *s_a, s_stack *s_b);

// reverse.c
void rra(s_stack *s_a);
void rrb(s_stack *s_b);
void rrr(s_stack *s_a, s_stack *s_b);

// push.c
s_stack 	*ft_push(s_stack *stack, int number);
s_stack 	*ft_pop(s_stack *stack);
s_stacks	*pa(s_stack *s_a, s_stack *s_b);
s_stacks	*pb(s_stack *s_a, s_stack *s_b);

// sort.c
// void ft_sort3(int *stack);
s_stacks *ft_sort5(s_stack *s_a, s_stack *s_b);
s_stacks *ft_sort4(int *s_a, int *s_b, int *lena, int *lenb);
void ft_rotatea(s_stack *stack, int pos);
void ft_rotateb(s_stack *stack, int pos);

// bigsmall.c
int ft_biggest(s_stack *stack);
int ft_smallest(s_stack *stack);
s_stacks *ft_twornb(s_stack *s_a, s_stack *s_b);

// mouve.c
int ft_position(s_stack *stack, int number);
int ft_index(int posa, int posb, int lena, int lenb);
int ft_bestmouve(s_stack *s_a, s_stack *s_b);

void ft_common(s_stack *s_a, s_stack *s_b, int posa, int posb);
void ft_swap(s_stack *s_a, s_stack *s_b, int posa, int posb);
void ft_rcommon(s_stack *s_a, s_stack *s_b, int posa, int posb);

#endif