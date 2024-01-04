/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 19:28:43 by brandebr          #+#    #+#             */
/*   Updated: 2024/01/04 19:52:40 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    **ft_split(char *str);
int	wc(char *str);

int	main(int argc, char **argv)
{
		int	words;
		int i = 0;

		if (argc == 2)
		{
				char	**res;
				res = ft_split(argv[1]);
				words = wc(argv[1]);
				printf("number of words are: %d\n", words);
				while (res[i])
						printf("%s\n", res[i++]);
		}
		return (0);
}
