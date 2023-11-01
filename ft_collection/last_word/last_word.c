/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:51:38 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/24 10:33:55 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	last(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == ' ' && s[i + 1] > 32 && s[i + 1] <= 126)
			j = i + 1;
		i++;
	}
	while (s[j]/* && (s[j] >=33 && s[j] <= 126)*/)
	{
		if (s[j] == ' ')
			return (0);
		write(1, &s[j++], 1);
	}
	return (0);
}

int	print_lst_fst(char *s)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == ' ' && s[i + 1] > 32 && s[i + 1] <= 126)
			j = i + 1;
		i++;
	}

	k = j;
	while (s[k - 1] == 32)
		k--;
	while (s[j])
	{
		if (s[j] == ' ')
			return (0);
		write(1, &s[j++], 1);
	}
	write(1, " ", 1);
	i = 0;
	while (i < k)
		write(1, &s[i++], 1);


	write(1, "\n", 1);
	return (0);
}

int	main(int argc, char **argv)
{
	(void)argc;
	//last(argv[1]);
	print_lst_fst(argv[1]);
	return (0);
}

