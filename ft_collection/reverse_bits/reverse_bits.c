/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:24:30 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/06 18:40:52 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
unsigned char reverse_bits(unsigned char octet)
{
    unsigned char reversed = 0;
    int num_bits = 8;  // There are 8 bits in an unsigned char.

    for (int i = 0; i < num_bits; i++)
    {
        reversed = (reversed << 1) | (octet & 1); // Shift and add the least significant bit.
        octet >>= 1;  // Shift octet to the right to process the next bit.
    }

    return reversed;
}*/
unsigned char reverse_bits(unsigned char octet)
{
    unsigned char reversed = 0;
    int num_bits = 8;  // There are 8 bits in an unsigned char.

    while  (num_bits >= 0)
    {
        reversed = (reversed << 1) | (octet & 1); // Shift and add the least significant bit.
        octet >>= 1; // Shift octet to the right to process the next bit.
   		num_bits--;
	}

    return reversed;
}
/*
unsigned char    reverse_bits(unsigned char octet)
{
    int        i = 8;
    unsigned char    res = 0;

    while (i > 0)
    {
        res = res * 2 + (octet % 2);
        octet = octet / 2;
        i--;
    }
    return (res);
}*/
/*
unsigned char   reverse_bits(unsigned char octet)
{
	return  (((octet >> 0) & 1) << 7) | \
			(((octet >> 1) & 1) << 6) | \
			(((octet >> 2) & 1) << 5) | \
			(((octet >> 3) & 1) << 4) | \
			(((octet >> 4) & 1) << 3) | \
			(((octet >> 5) & 1) << 2) | \
			(((octet >> 6) & 1) << 1) | \
			(((octet >> 7) & 1) << 0);
}*/
#include <stdio.h>

int main()
{
    unsigned char octet = 0x26; // Example input: 0010 0110
    unsigned char reversed = reverse_bits(octet); // Should result in 0110 0100

    printf("Original: 0x%02X\n", octet);
    printf("Reversed: 0x%02X\n", reversed);

    return 0;
}
