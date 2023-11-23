/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:24:30 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/23 12:52:19 by brandebr         ###   ########.fr       */
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
#include <unistd.h>
#include <stdio.h>

void    printit(unsigned char octet)
{
		int 	i;
		char	bit;

		i = 8;
	//	bit = 0;
		while (i--)
		{
				bit = ((octet >> i) & 1) + '0';
				write(1, &bit, 1);
		}
}

unsigned char   swap_bits(unsigned char octet)
{
		return ((octet >> 4 ) | (octet << 4));
}

int	is_power_of_2(int n)
{
		if (n == 0)
				return (0);
		return (n & (n - 1)) == 0;/*
	 int	idx;

	idx = 1;
	while (idx <= n)
	{
		if (idx == n)
			return (1);
		idx *= 2;
	}
	return (0);*/
}

unsigned char reverse_bits(unsigned char octet)
{
		return (((octet >> 0) & 1) << 7)|\
				(((octet >> 1) & 1) << 6)|\
				(((octet >> 2) & 1) << 5)|\
				(((octet >> 3) & 1) << 4)|\
				(((octet >> 4) & 1) << 3)|\
				(((octet >> 5) & 1) << 2)|\
				(((octet >> 6) & 1) << 1)|\
				(((octet >> 7) & 1) << 0);


























		/*
		   write(1, "\n",1);
		   return (((octet >> 0) & 1) << 7) |\
		   (((octet >> 1) & 1) << 6) |\
		   (((octet >> 2) & 1) << 5) |\
		   (((octet >> 3) & 1) << 4) |\
		   (((octet >> 4) & 1) << 3) |\
		   (((octet >> 5) & 1) << 2) |\
		   (((octet >> 6) & 1) << 1) |\
		   (((octet >> 7) & 1) << 0);
		   */
		/*  
			unsigned char reversed = 0;
			int num_bits = 8;  // There are 8 bits in an unsigned char.

			while  (num_bits > 0)
			{
			reversed = (reversed << 1) | (octet & 1); // Shift and add the least significant bit.
			octet >>= 1; // Shift octet to the right to process the next bit.
			num_bits--;
			}

			return reversed;
			*/	
}
/*
   void	printit(unsigned char octet)
   {
   int		i;
   char	bit;

   i = 8;
   while (i--)
   {
   bit = ((octet >> i & 1) + '0');
   write(1, &bit, 1);
   }
   write(1, "\n",1);

   }*/
/*

   unsigned char	swap_bits(unsigned char octet)
   {
//write(1, "\n",1);
return ((octet >> 4) | (octet << 4));
}*/
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
   (((oc				//printf("%d", i);
   tet >> 2) & 1) << 5) | \
   (((octet >> 3) & 1) << 4) | \
   (((octet >> 4) & 1) << 3) | \
   (((octet >> 5) & 1) << 2) | \
   (((octet >> 6) & 1) << 1) | \
   (((octet >> 7) & 1) << 0);
   }*/
#include <stdio.h>
/*
void	pu(char c)
{
		write(1, &c, 1);
}

int		count(char *str)
{
		int		i;

		i = 0;
		while (str[i])
				i++;
		return (i - 1);
}

int	last_word(char *str)
{
		int		i;
		int		end;

		i = count(str);
		end = i;
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
				i--;
		end = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && i != 0))
				i--;
		if (str[i] == ' ' || str[i] == '\t')
			i += 1;
		while (i <= end)
				pu(str[i++]);
		return (0);
*/
/*
void pu(char c)
{
		write(1, &c, 1);
}

int	ft_strlen(char *s)
{
		int		i;

		i = 0;
		while (s[i])
				i++;
		return (i - 1);
}

 int last_word(char *str)
 { 
		 int	i;
		 int	start;

		 i = 0;
		 start = 0;
		 while (str[i])
		 {
				 if (str[i] <= 32 && str[i + 1] > 32 && str[i + 1] <= 126)
				 {
						 start = i + 1;
				 }
				 i++;
		 }
		 while (str[start] && str[start] > 32 && str[start] <= 126)
				 pu(str[start++]);
		 return (0);

*/

void	bo(char c)
{
		write(1, &c, 1);
}

int last_word(char *str)
{
		int		i;
		int		start;
		
		i = 0;
		start = 0;
		while (str[i])
		{
				if (str[i] < 33 && str[i + 1] >= 33 && str[i + 1] < 127)
						start = i + 1;
				i++;
		}
		while (str[start] && str[start] >= 33 && str[start] <= 126)
				bo(str[start++]);
		return (0);



















		 /*
		int		i;
		int		start;
		int		len;

		i = 0;
		len = ft_strlen(str);
		while (str[i])
		{
			if (str[i] <= 32 && (str[i + 1] >= 33 && str[i + 1] <= 126))
					start = i + 1;
			i++;

		}
		while (str[start] && str[start] >= 33 &&  str[start] <= 126)
				pu(str[start++]);
		return (1);


*/





















	/*int		i;
	int		end;

	i = 0;
	while (str[i])
			i++;
	if (i == 0)
			return (0);
	i--;
	while ((str[i] == 32 || str[i] == '\t'))
			i--;
	if (i <= 0)
			return (0);
	end = i;
	while (str[i] != ' ' && str[i] != '\t' && i != 0)
			i--;
	if (str[i] == 32)
			i++;
	while (str[i] && i <= end)
			pu(str[i++]);
	return (0);*/
}
/*
int	main(int argc, char **argv)
{
//		char	num = argc + '0';
//		write(1, &num, 1);
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
*/
#include <stdlib.h>

int main(int argc, char **argv)
{
		unsigned char octet = 0x26; // Example input: 0010 0110
		unsigned char reversed = reverse_bits(octet); // Should result in 0110 0100
		unsigned char swapped;
		int		pot;
	(void)argc;
	(void)argv;
		pot = atoi(argv[2]);

		swapped = swap_bits(octet); // Should result in 0110 0100
									//  unsigned char  swapped;
		printit(octet);
		write(1,"\n", 1);
		printit(reversed);
		write(1,"\n", 1);
		//printf("\n");
		printit(swapped);
		write(1,"\n", 1);
		//printf("\n");
		printit(octet);
		write(1,"\n", 1);
		if (argc >= 2)
			last_word(argv[1]);
		write(1, "\n", 1);

	printf("0: %d\n", is_power_of_2(0));
	printf("2 %d\n", is_power_of_2(2));
	printf("4  %d\n", is_power_of_2(4));
	printf("6 %d\n", is_power_of_2(6));
	printf("8 %d\n", is_power_of_2(8));
	printf("32 %d\n", is_power_of_2(32));
	printf("42 %d\n", is_power_of_2(42));
	printf("67 %d\n", is_power_of_2(67));
	printf("124 %d\n", is_power_of_2(124));
	printf("256 %d\n", is_power_of_2(256));
	if (is_power_of_2(pot) == 1)
			printf("yes it is");
	else
			printf("no it isnt");
	return 0;
}
