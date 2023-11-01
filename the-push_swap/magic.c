/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:25:34 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/01 15:25:13 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_index(t_list *st)
{
	int		i;

	t_number*	tmp;
	t_number*	tmp2;

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
	int		smallest;
	int		i;
	int 		pos;
	t_number	*tmp;

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
	//		printf("smallest is in position: %i\n", pos);
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
	//	print_stack(st_a);
//		ft_printf("all sorted 😎\n");
	exit (0);
}

void	sort_three(t_list *st_a)
{
	t_number	*n;

	n = st_a->first;
	if (n->value <  n->next->value && n->next->value > \
			n->next->next->value && n->value < n->next->next->value)
	{
		rra(st_a);
		sa(st_a);
	}
	else if (n->value > n->next->value && n->next->next->value >\
			n->next->value && n->value > n->next->next->value)
		ra(st_a);
	else if (n->value <  n->next->value && n->next->value >\
			n->next->next->value)
		rra(st_a);
	else if (n->value >  n->next->value && n->next->value > \
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
	while  (n > 0)
	{
		ra(st_a);
		n--;
	}
	pb(st_a, st_b);
	sort_three(st_a);
	pa(st_b, st_a);
}

void	rev_sort_four(t_list *st_a, t_list *st_b)
{
	int	n;

	n = find_smallest(st_a);
	if (n == 3/* < st_a->len / 2*/)
	{/*
	    while  (n)
	    {*/
		rra(st_a);
		/*	n--;
			}*/
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
		pa(st_b, st_a);
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
		pa(st_b, st_a);
	}
}

void    sort_until_100(t_list *st_a, t_list *st_b)
{
	int     i;
	int	n;

	i = st_a->len;
	n = find_smallest(st_a);
	while (i > 5)
	{
		//		 printf("1. El menor es: %i\n", n);
		if (n <= i / 2)
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
		//		 print_stack(st_a);
		//		 printf("\n----\n");
		//		 print_stack(st_b);
		n = find_smallest(st_a);
		//		 printf("2. El menor es: %i\n", n);

	}
	fabulous_five(st_a, st_b);
	while (st_b->len)
		pa(st_b, st_a);
}
/*
   void    sort_until_100(t_list *st_a, t_list *st_b)
   {
   int     i;
   int	n;

   i = st_a->len -1;
   if (i > 5)
   {
   while (i >= 0)
   {
   n = find_smallest(st_a);
   printf("que es n? :%d\n", n);
//if (n < st_a->len / 2)
if (n)
{
while (n)
{
ra(st_a);
n--;
}
pb(st_a, st_b);
i--;
2585		}
else
{
while (n)
{
rra(st_a);
n--;
}
pb(st_a, st_b);
i--;
}
fabulous_five(st_a, st_b);
while (st_b->len)
pa(st_b, st_a);
}
}
}*/
/*
   void    sort_until_100(t_list *st_a, t_list *st_b)
   {
//int     i;
int	n;

n = 1; 
//i = st_a->len;
while (st_a->len)
{
//n = find_smallest(st_a);
if (n == st_a->first->index)
{
pb(st_a, st_b);
pb(st_a, st_b);				n++;
}
else
{
printf("n= %d\n", n);
ra(st_a);
print_stack(st_a);
//n--;
}
//i--;
}
fabulous_five(st_a, st_b);
while (st_b->len)
pa(st_b, st_a);
}*/
/*   void    sort_until_100(t_list *st_a, t_list *st_b)
     {
     int     i;
     int	n;

     i = st_a->len;
     while (i > 5)
     {
     n = find_smallest(st_a);
     while (n)
     {
     ra(st_a);
     n--;
     }
     pb(st_a, st_b);
     i--;
     }
     fabulous_five(st_a, st_b);
     while (st_b->len)
     pa(st_b, st_a);
     }
     */
void	sort_numbers(t_list *st_a, t_list *st_b)
{
	is_sorted(st_a, st_b);
	find_index(st_a);
	//   print_stack(st_a);
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
	//  print_stack(st_a);
	is_sorted(st_a, st_b);
	//	free(st_a);
	exit(0);
}
