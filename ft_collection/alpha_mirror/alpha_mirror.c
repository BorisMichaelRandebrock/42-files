/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:56:02 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/11 15:46:27 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	prin(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	char	c;

	i = 0;
	if (argc !=2)
		write(1, "\n", 1);
	while (argv[1][i])
	{	
		c = argv[1][i];
		if (c <'A'  || (c > 'Z' && c < 'a') || c > 'z')
			prin(c);
		else 
			prin(c);
		i++;
	}
	return (0);
}
*/

 void	prin(char c)
{
	write(1, &c, 1);
}


void alpha_mirror(char *str)
{
	int i = 0;


	while (str[i])
	{
		if (str[i] >= 'a' &&  str[i]<= 'z')
		{
	//		str[i] = 'z' - str[i] + 'a';
		prin('z' - (str[i] - 'a'));
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
	//		str[i] = 'A' - str[i] + 'A';
			prin('Z' - (str[i] - 'A'));
		}
		else 
			prin(str[i]);
	//	prin(str[i]);
		i++;
	}
}


int	main(int argc, char **argv)
{
	if (argc ==2)
	{
		alpha_mirror(argv[1]);
	}
	write(1, "\n", 1);
	
	return (0);
}
