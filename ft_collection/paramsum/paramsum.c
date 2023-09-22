/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:18:16 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/15 12:55:00 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	puts(char number)
{
	char	str[10] = "0123456789";

	if (number > 10)
		puts(number / 10);
	write(1, &str[number % 10], 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc >= 2)
	{
		while (argv[i])
		{
			i++;
		}
		puts(i - 1);
	write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}

/*
int	paramsum(char	str)
{

}
void	puts(int number)
{
	char	str[10] = "0123456789";

	if (number > 10)
		puts(number / 10);
	write(1, &str[number % 10], 1);
}

int	main(int argc, char **argv)
{
	int	i;
	
	i = 1;
	if (argc >= 2)
	{
		while (argv[i])
		{
			i++;
		}
		puts(i - 1);
	write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}*/
