/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:44:45 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/21 16:49:53 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pu(char c)
{
	write(1, &c, 1);
}

int	check(char *str, char c)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		else
			i++;
	}
	return (0);
}

void	ft_inter(char *s1, char *s2)
{
	int	i;
	int	j;
	int	k;
	char	str[420];

	i = 0;
	j = 0;
	k = 0;
	while (s1[i])
	{
		if (check(str, s1[i]) == 0)
		{
			str[k++] = s1[i];
			str[k] = '\0';
		}
		i++;
	}
	i = 0;
	while (str[i])
	{
		k = check(s2, str[i]);
		if (k == 1)
		{
			pu(str[i]);
			i++;
		}
		else
			i++;

	}
}


int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
