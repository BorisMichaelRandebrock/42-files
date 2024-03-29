/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:00:55 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/07 14:01:13 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	print_bits(unsigned char octet);

unsigned char	swap_bits(unsigned char c)
{
		return ((c >> 4) | (c << 4));
		/*
		   return ((c >> 4) | (c << 4));
		   */}

int main(void)
{
		char c;

		c = 1;
		print_bits(c);
		write(1, "\n" ,1);
	 	c =	swap_bits(c);
		print_bits(c);
		return (0);
}
