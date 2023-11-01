/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:56:20 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/30 20:01:02 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = stack_b_init();
	if (argc == 1 )
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	if (!ft_strlen(argv[1]))
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	if (argc == 2)
		stack_a = to_split(argv);
	else
		stack_a = no_split(argc, ++argv);
	if (stack_a->len == 1)
	{
		free_stack(stack_a);
		free_stack(stack_b);
		exit(0);
	}
//	if (!stack_a)
//		exit(0);
//	print_stack(stack_a);
	sort_numbers(stack_a, stack_b);
//	swap(stack_a);
//	print_stack(stack_a);
//	push(stack_a, stack_b);
/*	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	sa(stack_a);
	sb(stack_b);
	ss(stack_a, stack_b);
	pa(stack_b, stack_a);
	ra(stack_a);
	rb(stack_b);
	rrr(stack_a, stack_b);

*///	print_stack(stack_a);
//	print_stack(stack_b)
	
	free_stack(stack_a);
	free_stack(stack_b);
//	exit(0);
	return (0);
}
