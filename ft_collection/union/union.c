/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:08:15 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/11 19:54:34 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	put(char c)
{
	write(1, &c, 1);
}

int	str_len(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int check(int c, char *str, int index)
{
	int i = 0;

	while(i < index)
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return  1;
}

void	ft_union(char *str1, char *str2)
{
	int	i;
	int	j; 
	int	k;

	i = 0;
	j = str_len(str1);
	k = 0;
	while (str2[i])
	{
		str1[j] = str2[i];
		i++;
		j++;
	}
	str2[--i] = '\0';
	while(k <= i)
	{
		if(check(str1[k], str1, k) == 1)
			write (1, &str1[k], 1);
			k++;
	}
	write (1, "\n", 1);
	//printf("%s", str1);
	/*
	int	i;
	int	j;

	i = 0;
	while (str1)
	{
		put(str1[i]);
		i++;
	}
	i = 0;
	j = 0;
	while (str1)
	{
		while (j < str_len(str))
			if (str2[i] == str1[j])
			{
				j++;
				i++;
			}
	}
	*/
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
 	return (0);

}
