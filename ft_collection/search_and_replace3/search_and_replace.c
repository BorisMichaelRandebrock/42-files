/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:45:23 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/27 13:35:02 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	puta(char c)
{
	write(1, &c, 1);
}

void	search_and_replace(char *s, char c, char r)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			puta(r);
		else
			puta(s[i]);
		i++;
	}

}

int	main(int argc, char **argv)
{
	/*if (argv[2][1] != '\0' || argv[3][1] != '\0')
		puta('\n');*/
	 if (argc == 4 && (argv[2][1] == '\0' && argv[3][1] == '\0'))
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
	write(1, "\n", 1);
	return (0);
}
