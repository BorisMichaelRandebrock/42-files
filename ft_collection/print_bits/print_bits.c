/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:15:47 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/08 12:02:14 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	print_bits(unsigned char octet)
{
		int		i;
		char	bit;

		i = 8;
		while (i--)
		{
				bit = ((octet >> i & 1) + '0');
				write(1, &bit, 1);
		}
}
*/
void	print_bits(unsigned char octet)
{
		int		i;
		char	bit;

		i = 8;
		while (i--)
		{
			bit = ((octet >>  i & 1) + '0');
			write(1, &bit, 1);
		}
}

int main (void)
{
	unsigned char i = 128;

	print_bits(i);
	return 0;
}
