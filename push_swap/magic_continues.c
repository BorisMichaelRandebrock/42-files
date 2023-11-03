/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magic_continues.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:20:50 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/03 10:29:17 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
}
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
//	do_else_if(i, n, st_a, st_b);
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
