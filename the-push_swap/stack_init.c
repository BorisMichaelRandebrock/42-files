/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:38:42 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/30 14:18:22 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 
/*
   t_list	*stack_init(int *args)
   {
   int		i;
   t_number	*new;
   t_list		*stack_a;

   i = 0;
   new = NULL;
   stack_a = NULL;
   while (args[i] != '\0')
   {
   new->value = args[i];
   ft_lstadd_back(&stack_a, new);
   printf("nodo: %i\n", new->value);
   i++;
   }
   return (stack_a);
   }*/


t_list *stack_init(int *args, int argc)
{
	int i;
	t_number *new;
	t_list *stack_a;

	i = 0;
	stack_a = (t_list *)malloc(sizeof(t_list));
	stack_a->len = 0;
	stack_a->first = NULL;
	while (i < argc - 1)
	{
		new = (t_number *)malloc(sizeof(t_number));
		new->value = args[i];
		new->next = NULL;
		new->prev = NULL;
		if (stack_a->first == NULL)
		{
			stack_a->first = new;
		}
		else
		{
			ft_lstadd_back(&(stack_a->first), new);
		}
		//printf("node: %i\n", new->value);
		i++;
		stack_a->len++;
	}
	return (stack_a);
}

t_list *stack_b_init(void)
{
	t_list *stack_b;

	stack_b = (t_list *)malloc(sizeof(t_list));
	stack_b->len = 0;
	stack_b->first = NULL;
	return (stack_b);
}

void free_stack(t_list	*stack)
{
	t_number	*node;
	t_number	*tmp;

	if (stack != NULL)
	{
		node = stack->first;
//		printf("node = %p\n", node);
		while (node)
		{
			tmp = node->next;
//			printf("libero %d, de la direccion %p\n", node->value, node);
			free(node);
			node = tmp;
		}
		free(tmp);
//		printf("libero stack de la direccion %p\n", stack);
		free(stack);
	}
}

