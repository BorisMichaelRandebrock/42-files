/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:25:34 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/03 10:23:15 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_index(t_list *st)
{
	t_number	*tmp;
	t_number	*tmp2;
	int			i;

	i = 1;
	tmp = st->first;
	while (tmp)
	{
		tmp2 = st->first;
		while (tmp2)
		{
			if (tmp->value > tmp2->value)
				i++;
			tmp2 = tmp2->next;
		}
		tmp->index = i;
		i = 1;
		tmp = tmp->next;
	}
}

int	find_smallest(t_list *st)
{
	t_number	*tmp;
	int			smallest;
	int			i;
	int			pos;

	tmp = st->first;
	smallest = tmp->index;
	i = 0;
	pos = 0;
	while (tmp)
	{
		if (smallest > tmp->index)
		{
			pos = i;
			smallest = tmp->index;
		}
		i++;
		tmp = tmp->next;
	}
	return (pos);
}

int	is_sorted(t_list *st_a, t_list *st_b)
{
	t_number	*num;

	num = st_a->first;
	while (num->next)
	{
		if (num->value > num->next->value)
			return (-1);
		num = num->next;
	}
	free_stack(st_a);
	free_stack(st_b);
	exit (0);
}

void	sort_three(t_list *st_a)
{
	t_number	*n;

	n = st_a->first;
	if (n->value < n->next->value && n->next->value > \
			n->next->next->value && n->value < n->next->next->value)
	{
		rra(st_a);
		sa(st_a);
	}
	else if (n->value > n->next->value && n->next->next->value > \
			n->next->value && n->value > n->next->next->value)
		ra(st_a);
	else if (n->value < n->next->value && n->next->value > \
			n->next->next->value)
		rra(st_a);
	else if (n->value > n->next->value && n->next->value > \
			n->next->next->value)
	{
		sa(st_a);
		rra(st_a);
	}
	else if (n->value > n->next->value && n->next->value < \
			n->next->next->value)
		sa(st_a);
}

void	sort_four(t_list *st_a, t_list *st_b)
{
	int	n;

	n = find_smallest(st_a);
	while (n > 0)
	{
		ra(st_a);
		n--;
	}
	pb(st_a, st_b);
	sort_three(st_a);
	pa(st_b, st_a);
}
/*
void	rev_sort_four(t_list *st_a, t_list *st_b)
{
	int	n;

	n = find_smallest(st_a);
	if (n == 3)
	{
		rra(st_a);
		pb(st_a, st_b);
		sort_three(st_a);
		pa(st_b, st_a);
	}
	else
	{
		while (n)
		{
			ra(st_a);
			n--;
		}
		pb(st_a, st_b);
		sort_three(st_a);
		pa(st_b, st_a);
	}
}

void	fabulous_five(t_list *st_a, t_list *st_b)
{
	int	n;

	n = find_smallest(st_a);
	if (n < st_a->len / 2)
	{
		while (n)
		{
			ra(st_a);
			n--;
		}
		pb(st_a, st_b);
		sort_four(st_a, st_b);
	}
	else
	{
		n = st_a->len - n;
		while (n)
		{
			rra(st_a);
			n--;
		}
		pb(st_a, st_b);
		rev_sort_four(st_a, st_b);
	}
	pa(st_b, st_a);
}

void	do_else_if(int i, int n, t_list *st_a, t_list *st_b )
{
	while (i - n > 0)
	{
		rra(st_a);
		n++;
	}
	pb(st_a, st_b);
	i--;
}

void	sort_until_100(t_list *st_a, t_list *st_b)
{
	int	c;
	int	n;

	c = 1;
	n = find_smallest(st_a) + 1;
	while (st_a->len > 5)
	{
		if (n <= (st_a->len / 2))
			while (st_a->first->index != c)
				ra(st_a);
		else if (n > (st_a->len / 2))
			while ((st_a->first->index) != c)
				rra(st_a);
		pb(st_a, st_b);
		c++;
		n = find_smallest(st_a) + 1;
	}
	fabulous_five(st_a, st_b);
	while (st_b->len)
		pa(st_b, st_a);
}*/
/*


   while (i > 5)
   {
   if (n <= i / 2) // if (c <= i /2)
   {
   while (n > 0)
   {
   ra(st_a);
   n--;
   }
   pb(st_a, st_b);
   i--;
   }
   else if (n > i / 2)
{
while (i - n > 0)
{
rra(st_a);
n++;
}
pb(st_a, st_b);
i--;
}
n = find_smallest(st_a);
}
fabulous_five(st_a, st_b);
while (st_b->len)
pa(st_b, st_a);
*/
/*
void	sort_numbers(t_list *st_a, t_list *st_b)
{
	is_sorted(st_a, st_b);
	find_index(st_a);
	if (st_a->len == 2)
		sa(st_a);
	if (st_a->len == 3)
		sort_three(st_a);
	if (st_a->len == 4)
		sort_four(st_a, st_b);
	if (st_a->len == 5)
		fabulous_five(st_a, st_b);
	if (st_a->len > 5 && st_a->len <= 10)
		sort_until_100(st_a, st_b);
	if (st_a->len >= 11)
		get_radixal(st_a, st_b);
	is_sorted(st_a, st_b);
	exit(0);
}
*/
