/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:28:03 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/07 11:53:05 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	jmpspc(char *str, int i)
{
	while (str[i])
	{
		if (str[i] == ' ' || str[i] ==  '\t')
			i++;
		else
			return (i);
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if  (argc != 2)
	{
		write(1, "\n",1);
	}
	else
	{
		i = jmpspc(argv[1], i);
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
