/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fst_moves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:53:53 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/27 11:44:22 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list *st)
{
	int tmp;
	int tmp2;

	tmp = st->first->value;
	tmp2 = st->first->index;
	st->first->value = st->first->next->value;
	st->first->index = st->first->next->index;
	st->first->next->value = tmp;
	st->first->next->index = tmp2;
}
/*
void	swap(t_list *stack)
{
	t_number	*tmp;
	t_number	*tmp2;

	tmp = stack->first;
	tmp2 = stack->first->next;
	tmp->prev = tmp2;
	tmp->next = tmp->next->next;
	tmp2->prev = NULL; //temp->prev;
	tmp2->next = tmp;
	stack->first = tmp2;
	stack->first->next = tmp;
}*/
/*
void	swap(t_list *stack)
{
	t_number	*tmp;
	t_number	*tmp2;

	tmp = stack->first;
	printf("tmp vo: %i\n", tmp->value);
	printf("tmp next v: %i\n", tmp->next->value);
	printf("tmp prev v: %i\n", tmp->prev->value);
	tmp2 = stack->first->next;
	tmp2->prev = tmp->prev;
	tmp->prev = tmp2;
	tmp->next = tmp->next->next;
	stack->first = tmp2;
	stack->first->next = tmp;
	tmp = stack->first;
*//*	while (temp->next)
	{
		printf("valor de cada nodo: %i\n", temp->value);
		temp = temp->next;
	}
	 printf("valor de cada nodo: %i\n", temp->value);
*///}

void	push(t_list *src, t_list *dst)
{
	int		i;
	t_number	*tmp;
	t_number	*tmp2;

	i = 0;
	tmp = src->first;
	src->first = src->first->next;
	if (src->first)
		src->first->prev = NULL;
	if (dst->len == 0)
	{
		dst->first = tmp;
		dst->first->prev = NULL;
		dst->first->next = NULL;
	}
	else
	{
		tmp2 = dst->first;
		dst->first = tmp;
		tmp2->prev = tmp;
		dst->first->prev = NULL;
		dst->first->next = tmp2;
	}
	dst->len++;
	src->len--;
}

void	rotate(t_list *st)
{
	t_number	*tmp;
	t_number	*tmp2;
	t_number	*tmp3;

	tmp = st->first;
	tmp3 = st->first->next;
	tmp3->prev = NULL;
	tmp2 = ft_lstlast(st);
	tmp2->next = tmp; 
	tmp->prev = tmp2;
	tmp->next = NULL;
	st->first = tmp3;
}
/*
void	rotate(t_list *st)
{
	t_number	*tmp;
	t_number	*tmp2;
//	t_number	*tmp3;

	tmp = st->first;
//	tmp3 = st->first->next;
	tmp2 = ft_lstlast(st);
//	tmp3->prev = NULL;
	tmp2->next = tmp; 
	tmp2->prev = NULL; 
	tmp->prev = tmp2;
	st->first = tmp2;
//	tmp->next = NULL;
	//st->first = tmp3;
}*/
/*void delete(void *content)
{
	content = NULL;
}*/

void	reverse_rotate(t_list *st)
{
	t_number	*tmp1;
	t_number	*tmp3;
	t_number	*tmp2;
	
	tmp1 = st->first;
	tmp3 = ft_lstlast(st);
 	tmp2 = tmp3->prev;
	tmp3->next = tmp1;
	tmp1->prev = tmp3;
	st->first = tmp3;
	st->first->prev = NULL;
	tmp2->next = NULL;



	/*
	st->first->prev = tmp3;
	st->first = tmp3;
	printf("first value = %i, next= %i\n", st->first->value, st->first->next->value);
	st->first->prev = NULL;
	tmp2->next = NULL;*/


/*
	tmp2 = tmp3->prev;
	printf("tmp3 = %i\n", tmp3->value);
	tmp1 = st->first;
	st->first = tmp3;
	st->first->next = tmp1;
	tmp1->prev = st->first;
	tmp2->next = NULL;
	st->first->prev = NULL;*/
/*
	//tmp3 = tmp3->prev;
	st->first->prev = NULL;
//	tmp3->next = NULL;
*while (tmp3->next)
		tmp3 = tmp3->next;
	tmp3->next = NULL;
	tmp2->prev = NULL;
	
	tmp1 = st->first;*/
/*	while (tmp1->next)
	{
		printf("valor de cada nodo: %i\n", tmp1->value);
		tmp1 = tmp1->next;
	}
	 printf("valor de cada nodo: %i\n", tmp1->value);
*/
}
