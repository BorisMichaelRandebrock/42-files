/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 19:01:45 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/08 19:53:29 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*find_and_replace(char *str, char c, char b)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			str[i] = b;
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	char *result;
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	result = find_and_replace(argv[1], argv[2][0], argv[3][0]);
	printf("%s\n", result);
	return (0);
}
