/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:49:57 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/12 14:30:50 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put(char c)
{
	write(1, &c, 1);
}

int	check(char c, char *str2)
{
	int	i;

	i = 0;
	while (str2[i])
	{
		if (str2[i] == c)
			return (1);
		else
			i++;
	}
	return (0);
}

void	inter(char *str1, char *str2)
{
	int	i;
	int	j;
	int	k;
	char	str3[300];
		
	i = 0;
	j = 0;
	k = 0;
	while (str1[i])
	{
		if (check(str1[i], str3) == 0)
		{
			str3[k++] = str1[i];
			str3[k] = '\0';
		}
		i++;
	}
	i = 0;
	while (str3[i])
	{
		k = check(str3[i], str2);
		if (k == 1)
		{
			put(str3[i]);
			i++;
		}
		else
			i++;		
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
	}
	else
		write(1, "\n", 1);
}
