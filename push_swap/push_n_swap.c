/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_n_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:58:37 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/02 16:59:20 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *st_a)
{
	swap(st_a);
	ft_printf("sa\n");
}

void	sb(t_list *st_b)
{
	swap(st_b);
	ft_printf("sb\n");
}

void	ss(t_list *st_a, t_list *st_b)
{
	swap(st_a);
	swap(st_b);
	ft_printf("ss\n");
}

void	pa(t_list *st_b, t_list *st_a)
{
	push(st_b, st_a);
	ft_printf("pa\n");
}

void	pb(t_list *st_a, t_list *st_b)
{
	push(st_a, st_b);
	ft_printf("pb\n");
}
