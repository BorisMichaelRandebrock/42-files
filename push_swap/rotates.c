/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotates.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:50:06 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/03 10:40:59 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	ra(t_list *stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}
*/
void	rb(t_list *stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
}

void	rr(t_list *stack_a, t_list *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rb\n");
}

void	rra(t_list *stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_list *stack_b)
{
	reverse_rotate(stack_b);
	ft_printf("rb\n");
}

void	rrr(t_list *stack_a, t_list *stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr\n");
}
