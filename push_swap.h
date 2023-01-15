/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:25:29 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/15 14:54:30 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "./libft/libft.h"

// errors.c
int		ft_integers(char *farg);
int		ft_range (char *farg);
char	*ft_strjarg(char **av);

// arrays.c
void	ft_free2d(char **str);
int 	ft_calc2d(char **str);
int ft_duplicate(char *farg);
#endif