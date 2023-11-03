/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_radixal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:59:09 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/02 13:38:14 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_num(t_list *st)
{
	t_number	*tmp;
	int			biggest;
	int			i;
	int			pos;

	tmp = st->first;
	biggest = tmp->index;
	i = 0;
	pos = 0;
	while (tmp)
	{
		if (biggest < tmp->index)
		{
			pos = i;
			biggest = tmp->index;
		}
		i++;
		tmp = tmp->next;
	}
	return (pos);
}

static void	do_while(int max_bits, int size, t_list *st_a, t_list *st_b)
{
	int			i;
	int			j;
	t_number	*tmp;

	i = 0;
	tmp = st_a->first;
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			tmp = st_a->first;
			if (((tmp->index >> i) & 1) == 1)
				ra(st_a);
			else
				pb(st_a, st_b);
		}
		while (st_b->len)
			pa(st_b, st_a);
		i++;
	}
}

void	get_radixal(t_list *st_a, t_list *st_b)
{
	int		size;
	int		max_bits;

	size = st_a->len;
	max_bits = 0;
	while (size >> max_bits != 0)
		max_bits++;
	do_while(max_bits, size, st_a, st_b);
}
