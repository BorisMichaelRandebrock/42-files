/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:47:31 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/06 16:01:43 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;

	while (str[i])
		i++;
	return (i);
}

int	nullcountr(char *str)
{
	int	i;

	i = ft_strlen(str);
	if (str[i] == 0)
		i--;
	while (str[i] == ' ')
		i--;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	char	str;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] == ' ')
		i++;
	while (argv[1][i] && i <= nullcountr(argv[1]))
	{
		str = argv[1][i];
		if (argv[1][i + 1] == ' ' && str == ' ')
		{
			i++;
			continue ;
		}
		else 
			write(1, &str, 1);
		i++;
	}
	write(1, "\n", 1);
}
