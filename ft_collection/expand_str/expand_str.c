/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:29:41 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/12 18:31:58 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	expand_str(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			flag = 1;
		if (!(str[i] == ' ' || str[i] =='\t'))
		{
			if (flag)
				write(1, "   ", 3);
			flag = 0;
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}

